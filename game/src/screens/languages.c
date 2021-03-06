#include "../inc/include.h"
#include "../../libs/psg.h"

#define DEFAULT_Y 8
#define DEFAULT_X 17



static u16 y_pos;


static void write ( u8 *str, u8 y )
{
    SYS_disableInts();
    VDP_drawText ( prepare_string(str), DEFAULT_X, y );
    SYS_enableInts();
}


static void writeText ( u8 *str, u16 pal, u8 inc_y )
{
    write ( str, y_pos );
    y_pos += inc_y;
}


static void _blink ( const u16 x, const u16 y, u8 option )
{
    write ( "                              ", option*2+DEFAULT_Y  );

	u8 i = getHz()/2;

	while ( i-- )
	{
		if ( i % 2  )
		{
            write ( "                              ", option*2+DEFAULT_Y );
        }

        waitHz(2);
		write ( getLanguage(option), option*2+DEFAULT_Y );
	}

	write ( getLanguage(option), option*2+DEFAULT_Y );
}


void screen_languages ()
{
    if ( gamestate.lenguaje )
    {
        return;
    }

    y_pos = DEFAULT_Y;

    s8 option = 0;

    displayOff(0);

    VDP_setTextPalette ( PAL0 );
    prepareColor( 0, 0x000 );
    prepareColor( 1, 0xfff );
    prepareColor( 2, 0x444 );

    SYS_disableInts();

    font_setPalette();
    resetScreen();

    u8 i, count = countLanguages();


    for ( i=0; i<count; i++ )
    {
        writeText ( getLanguage(i), PAL0, 2 );
    }

    y_pos = DEFAULT_Y;
    VDP_drawText ( ">", DEFAULT_X-2, option*2+y_pos );

    SYS_enableInts();

    displayOn(10);


    while ( 1 )
    {
        waitJoy ( ); //JOY_waitPress(JOY_1, BUTTON_UP | BUTTON_DOWN | BUTTON_ABCS );

        SYS_disableInts();
        VDP_drawText ( " ", DEFAULT_X-2, option*2+y_pos );
        SYS_enableInts();

		if ( joy1_pressed_down ) { option++; psglist_play ( PSG_SELECT_2 ); }
		if ( joy1_pressed_up   ) { option--; psglist_play ( PSG_SELECT_2 ); }

		if ( option < 0       ) option = count-1;
		if ( option > count-1 ) option = 0;

		SYS_disableInts();
		VDP_drawText ( ">", 15, option*2+y_pos );
		SYS_enableInts();


        if ( joy1_pressed_abc | joy1_pressed_start )
        {
            break;
        }

        VDP_waitVSync();
    }

    psglist_play ( PSG_START );
    _blink ( DEFAULT_X, option*2+y_pos, option );

    gamestate.lenguaje = option + 1;

    psg_pause();
    music_stop();

    displayOff(10);
}
