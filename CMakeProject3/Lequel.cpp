/**
 * @file Lequel.cpp
 * @brief Language identification based on trigrams
 * @author Marc S. Ressl
 * @date 2023
 *
 * @cite https://towardsdatascience.com/understanding-cosine-similarity-and-its-application-fd42f585296a
 */

#include <cmath>
#include <codecvt>
#include <locale>
#include <iostream>

#include "Lequel.h"

using namespace std;

// Constante para definir el tamaño del n-grama en nuestro caso trigrama
const size_t TRIGRAM_SIZE = 3;

/**
 * @brief Builds a trigram profile from a given text.
 *
 * @param text Vector of lines (UTF-8 encoded strings).
 * @return TrigramProfile The trigram profile.
 */
TrigramProfile buildTrigramProfile(const Text& text) {
    // Conversor de UTF-8 (string) a Unicode (wstring)
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

    TrigramProfile trigramProfile;

    for (const auto& lineUtf8 : text) {
        string line = lineUtf8;

        // Quitar '\r' de finales de línea en Windows
        if (!line.empty() && line.back() == '\r') {
            line.pop_back();
        }

        // Convertir a wstring para tratar caracteres Unicode como unidades lógicas
        wstring unicodeLine = converter.from_bytes(line);

        // Si la línea no alcanza para un trigrama, la ignoramos
        if (unicodeLine.size() < TRIGRAM_SIZE) continue;

        // Extraer trigramas consecutivos
        for (size_t i = 0; i <= unicodeLine.size() - TRIGRAM_SIZE; i++) {
            // Substring Unicode de 3 caracteres
            wstring trigramW = unicodeLine.substr(i, TRIGRAM_SIZE);

            // Convertir de nuevo a UTF-8 (string) porque TrigramProfile usa string
            string trigram = converter.to_bytes(trigramW);

            // Acumular la frecuencia del trigrama
            trigramProfile[trigram] += 1.0f;
        }
    }

    return trigramProfile;
}

/**
 * @brief Normalizes a trigram profile using L2 norm.
 *
 * @param trigramProfile The trigram profile (modified in place).
 */
void normalizeTrigramProfile(TrigramProfile& trigramProfile) {
    double sumSquares = 0.0;

    // Calcular la suma de cuadrados de todas las frecuencias
    for (const auto& element : trigramProfile) {
        sumSquares += static_cast<double>(element.second) * element.second;
    }

    // Evitar división por cero si el perfil está vacío
    if (sumSquares == 0.0) return;

    // Norma L2 (longitud del vector de frecuencias)
    double norm = sqrt(sumSquares);

    // Normalizar cada frecuencia dividiéndola por la norma
    for (auto& element : trigramProfile) {
        element.second = static_cast<float>(element.second / norm);
    }
}

/**
 * @brief Calculates the cosine similarity between two trigram profiles
 *
 * @param textProfile The text trigram profile
 * @param languageProfile The language trigram profile
 * @return float The cosine similarity score
 */
float getCosineSimilarity(TrigramProfile& textProfile, TrigramProfile& languageProfile)
{
    float value = 0.0;
   
	// Recorremos ambos perfiles
    for (auto& text_trigram : textProfile) {
        for (auto& lang_trigram : languageProfile) {
            //si ambos trigramas coinciden, calculamos su similitud coseno y la acumulamos
            if (text_trigram.first == lang_trigram.first) {
                value += text_trigram.second * lang_trigram.second;
            }
        }
    }
    return value;
}

/**
 * @brief Identifies the language of a text.
 *
 * @param text A Text (vector of lines)
 * @param languages A list of Language objects
 * @return string The language code of the most likely language
 */
string identifyLanguage(const Text& text, LanguageProfiles& languages)
{
	// Construimos el perfil de trigramas del texto
    TrigramProfile TextProfile = buildTrigramProfile(text);
    //Normalizamos el perfil de texto
    normalizeTrigramProfile(TextProfile);

    float previous_cosine= -1.0;
    string lang = "---";

    // Comparamos el perfil de trigramas del texto con cada perfil de lenguaje
    for (auto& lenguaje : languages) {
		//obtemnemos la similitud coseno
        float cosine_simmilarity = getCosineSimilarity(TextProfile, lenguaje.trigramProfile);
		//si es mayor que la anterior, actualizamos el lenguaje y la similitud de coseno anterior
        if(cosine_simmilarity > previous_cosine){
			lang = lenguaje.languageCode;
            previous_cosine = cosine_simmilarity;
         }
    }
    return lang;
}
