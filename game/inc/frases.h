
#define FRASES_MAX_CHARS 512

typedef struct
{
	u8  lang;
	u8  grupo;
	u8  cadena [ FRASES_MAX_CHARS ];
}
FRASE;



enum
{
	ENGLISH = 1,
	SPANISH,
	ITALIAN,
	FRENCH,
};



void  frases_init    ( u16 grupo );
u8   *frases_next    ( );
u8   *frases_find    ( u16 grupo, u16 numero );
u16   frases_count   ( u16 grupo );
u8   *prepare_string ( u8 *str );
u8   *getLanguage    ( u8 );
u8    countLanguages ( );
