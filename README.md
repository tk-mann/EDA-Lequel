# EDA #level2: Lequel?

## Integrantes del grupo y contribución al trabajo de cada integrante

* Thomas Kaufmann: Unificación de código, desarrollo de readme, implementación de algoritmo coseno 
* Bautista Allegrini: Optimización de código,  implementación de trigramas y normalización


## Respuestas del enunciado

1. ¿En qué idioma está el siguiente texto?

історія земель сучасної України, українського народу та інших національностей, що проживають на території України, від доісторичних часів до сьогодення.

Ucraniano

2. ¿En qué idioma está el siguiente texto?

아리랑, 아리랑, 아라리요... 아리랑 고개로 넘어간다. 나를 버리고 가시는 님은 십리도 못가서 발병난다. 청천하늘엔 잔별도 많고, 우리네 가슴엔 희망도 많다. 저기 저 산이 백두산이라지, 동지 섣달에도 꽃만 핀다.

Coreano

3. ¿En qué idioma está el siguiente texto?

၁၉၄၀ ခုနှစ်တွင် ဗိုလ်ချုပ်အောင်ဆန်းဦးဆောင်သည့် ရဲဘော်သုံးကျိပ်အဖွဲ့ဝင်တို့သည် ဗမာ့လွတ်မြောက်ရေးတပ်မတော် (ဘီအိုင်အေ) ကို တည်ထောင်ခဲ့ကြသည်။[၂၀][၂၀] ရဲဘော်သုံးကျိပ်သည် ဂျပန်နိုင်ငံတွင် စစ်သင်တန်းများတက်ရောက်ခဲ့ကြသည်။[၂၀]

Birmano

4. ¿En qué idioma está el siguiente texto?

Negema wangu binti, mchachefu wa sanati upulike wasiati asa ukanzingatia. Maradhi yamenshika hatta yametimu mwaka sikupata kutamka neno lema kukwambia. Ndoo mbee ujilisi na wino na qaratasi moyoni nina hadithi nimependa kukwambia.

Suajili

5. ¿En qué idioma está el siguiente texto?

Այժմ նա յուր կինտոյի արհեստով ժառանգած Ճանճուր մականունը կցելով յուր հոր՝ Օհանեսի անվան հետ, կոչվում է «Թիֆլիսի պատվավոր քաղաքացի Ճանճուր Իվանիչ»։ Այդ անունով ևս մենք պարտավորվում ենք նրան ծանոթացնել մեր ընթերցողներին։

Armenio

6. ¿En qué idioma está el siguiente texto?

Belirli bir bölgedeki mevcut hava durumu hava raporu, gelecekte beklenen durumlar ise hava tahmini şeklinde, ilgili meteoroloji otoriteleri tarafından yayımlanır.

Turco

7. ¿En qué idioma está el siguiente texto?

ᎤᎵᏍᏔᏴᏗ ᎦᎵᏙᏗ ᏭᎷᏤᎢ, ᎤᏗᏔᎮ ᎦᏁᎲ, ᎤᏲᏏᏍᎩ ᎤᏗᏔᎮ ᎤᏅᏗ ᏃᎴ ᎤᎩᏍᏙᎡ ᏑᎾᎴ ᎠᎩᏍᏗ ᎤᏂᏑᎸᏓ. ᎣᏍᏓ ᏄᎵᏍᏔᏁᎮ ᎤᏩᏌ ᎤᏪᏅᏒ ᎡᏙᎲ. ᎦᏅᏆᎶᏍᏗ ᏭᏴᎮ ᏣᏄᏏ ᏃᎴ ᏣᏁᎳ ᎠᏂᏎᏂᏏ ᏴᎩ, ᎣᏍᏓ ᏄᏩᏁᎴ ᎠᏦᏴ.

Cheroqui

8. ¿En qué idioma está el siguiente texto?

ُیعتقد بأن ضابطة في الجیش البریطاني تدعى بریت تشاندي أصبحت أولامرأة من أصول آسیویة ُتكملُ رحلة استكشافیة فردیة عبر .القارة القطبیة الجنوبی  

Árabe

9. ¿En qué idioma está el siguiente texto?

ગુજરાતી સંસ્કૃત ભાષામાંથી વિકસિત થયેલી આધુનિક ઈન્ડો-આર્યન ભાષા છે. પરંપરાગત રીતે ૩ ઐતિહાસિક તબક્કાઓ પ્રમાણે ઈન્ડો-આર્યન ભાષાઓ વચ્ચે ભેદ કરાય છે.

Guyaratí

10. ¿En qué idioma está el siguiente texto?

Al Seicento appartiene il primo trattato dedicato non ai volgari italiani o a uno o più di tali volgari, ma alla lingua italiana in quanto tale: Delle osservazioni della lingua italiana di Marcantonio Mambelli, detto il Cinonio.

Italiano

11. El siguiente texto fue escrito por Robert Burns en escocés. ¿Qué dice Lequel? ¿Qué falla? Justifica por qué ocurre lo que ocurre.

And there's a hand, my trusty fiere! and gie's a hand o' thine! And we’ll tak' a right gude-willie waught, for auld lang syne.

El programa indica que el texto fue escrito en Inglés. La razón de este fallo se debe a que ambos idiomas tienen una gran similitud linguística y comparten muchas palabras, y por lo tanto sus trigramas son bastante similares. Debido a esto el programa no sabe distiguir bien entre ellas, produciendo una similitud coseno muy similares para cada idioma. Si se deseara poder diferenciar entre ambos idiomas habría que tomar un sample text más grande o una porción de texto que difiera más, por ejemplo:

Halò! Is mise Anna. Tha mi a’ fuireach ann an Dùn Èideann, ach bidh mi a’ dol gu Glaschu gu tric airson mo charaidean fhaicinn. Tha mi toilichte nuair a bhios mi còmhla riutha.

Da como resultado Escocés


12. El siguiente texto está en inglés. ¿Qué dice Lequel? ¿Qué falla? Justifica por qué ocurre lo que ocurre.

IT WAS THE BEST OF TIMES, IT WAS THE WORST OF TIMES,
IT WAS THE AGE OF WISDOM, IT WAS THE AGE OF FOOLISHNESS,
IT WAS THE EPOCH OF BELIEF, IT WAS THE EPOCH OF INCREDULITY,
IT WAS THE SEASON OF LIGHT, IT WAS THE SEASON OF DARKNESS,
IT WAS THE SPRING OF HOPE, IT WAS THE WINTER OF DESPAIR,
WE HAD EVERYTHING BEFORE US, WE HAD NOTHING BEFORE US,
WE WERE ALL GOING DIRECT TO HEAVEN, WE WERE ALL GOING DIRECT THE OTHER WAY
– IN SHORT, THE PERIOD WAS SO FAR LIKE THE PRESENT PERIOD, THAT SOME OF ITS NOISIEST AUTHORITIES INSISTED ON ITS BEING RECEIVED, FOR GOOD OR FOR EVIL, IN THE SUPERLATIVE DEGREE OF COMPARISON ONLY.

Lequel dice que el texto está en Afrikaans. La falla es producida debido a que el programa está diseñado para comparar textos escritos mayoritariamente en minúsuclas o siguiendo las reglas gramaticales. Este texto, en cambio, está escrito completamente en mayúscula, por lo que los trigramas del ingles no van a coincidir a pesar de que pertenezca a ese idioma. Como consecuencia, el programa presenta un comportamiento aleatorio y deja de ser funcional.


## Bonus points

[completar]
