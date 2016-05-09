#include "../inc/include.h"

#define HOW_TO_PLAY_TILE     32





//static u16 _blink_title_cnt = 0;
//static s32 _cb_counter;
//static s32 _cb_scroll;



/////////////////////////////////////////////////////////////////////////////////////////////////////////////




//static void _blink ( u8 *str, const u16 x, const u16 y );




//static u16  _wait               ( u16 secs, u16 buttons, u8 on_release );
//static u16  _wait_hz            ( u16 hz,   u16 buttons, u8 on_release );
//static void _display            ( u8 x, u8 y, u8 width, u8 height, u8 *str );
//static u16  _release            ( u16 joy, u16 port );
//static void _blink_title        ( );
//static _voidCallback  *_desplazar_fondo      ( );
//static _voidCallback  *_fnull                ( );
//static _voidCallback  *_blink_title_callback ( );




//static _voidCallback *_blink_title_callback ()
//{
//	if ( _blink_title_cnt > 1 && ( _blink_title_cnt == 10 || _blink_title_cnt % 450 == 0 ) )
//	{
//		_blink_title();
//	}
//
//	_blink_title_cnt++;
//	psgfx_callback();
//
//	return 0;
//}


//static _voidCallback *_fnull ( )
//{
//	return 0;
//}
//
//
//static _voidCallback *_desplazar_fondo ( )
//{
//	if ( ++_cb_counter % 60 == 0 )
//	{
//		VDP_setHorizontalScroll ( PLAN_B, --_cb_scroll );
//	}
//
//	return 0;
//}




//static u16  _pressed ( u16 joy, u16 buttons )
//{
//	return JOY_readJoypad ( joy ) & buttons ;
//}


//static void _display ( u8 x, u8 y, u8 width, u8 height, u8 *str )
//{
//	u16 i;
//	u16 pos = TILE_FONTINDEX - 20;
//	u8 w = x + width  - 1 ;
//	u8 h = y + height - 1 ;
//
//	VDP_loadTileData ( cb_square.tiles, pos, cb_square.width * cb_square.height, 0 );
//
//	VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 0 ), x, y );
//	VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 2 ), w, y );
//	VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 6 ), x, h );
//	VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 8 ), w, h );
//
//	for ( i=x+1; i<w; i++ )
//	{
//		VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 1 ), i, y );
//		VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 7 ), i, h );
//	}
//
//	for ( i=y+1; i<h; i++ )
//	{
//		VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 3 ), x, i );
//		VDP_setTileMapXY ( APLAN, TILE_ATTR_FULL ( PAL0, 1, 0, 0, pos + 5 ), w, i );
//	}
//
//	x = x + ( width / 2 )- ( strlen(str) / 2 );
//	VDP_drawText ( str, x, y );
//}



//static u16 _release ( u16 joy, u16 port )
//{
//	while ( TRUE )
//	{
//		u16 aux = JOY_readJoypad ( port ) ;
//
//		if ( aux != joy )
//		{
//			return aux;
//		}
//
//		VDP_waitVSync();
//	}
//}


//static u16 _wait ( u16 secs, u16 buttons, u8 on_release )
//{
//	return _wait_hz ( secs * ( IS_PALSYSTEM ? 50 : 60 ), buttons, on_release );
//}


//static u16 _wait_hz ( u16 hz, u16 buttons, u8 on_release )
//{
//	u16 joy = 0;
//
//	while ( hz -- )
//	{
//		if ( buttons && ( joy = _pressed(JOY_1,buttons) ) )
//		{
//			break;
//		}
//
//		VDP_waitVSync();
//	}
//
//	++hz;
//
//	while ( on_release && hz -- )
//	{
//		if ( joy != JOY_readJoypad(JOY_1) )
//		{
//			break;
//		}
//
//		VDP_waitVSync();
//	}
//
//	return joy;
//}




//static void _blink_title ( )
//{
//	struct _desp {
//		const u8  origen;
//		const u8  destino;
//		u16 valor;
//	};
//
//	struct _desp desp[5] =
//	{
//		{ 14, 12, VDP_getPaletteColor ( 16 + 14 ) },
//		{ 12, 10, VDP_getPaletteColor ( 16 + 12 ) },
//		{ 10,  9, VDP_getPaletteColor ( 16 + 10 ) },
//		{  9,  8, VDP_getPaletteColor ( 16 +  9 ) },
//		{  8, 14, VDP_getPaletteColor ( 16 +  8 ) },
//	};
//
//	u8 i, j;
//
//	for ( j=0; j<5; j++ )
//	{
//		for ( i=0; i<5; i++ )
//		{
//			VDP_setPaletteColor ( 16 + desp[i].destino, desp[i].valor );
//		}
//
//		for ( i=0; i<5; i++ )
//		{
//			desp[i].valor = VDP_getPaletteColor ( 16 + desp[i].origen );
//		}
//
//		waitMs(30+j*20);
//	}
//}


//_joyEventCallback *_readJOY ( u16 joy, u16 changed, u16 state )
//{
//   if ( joy == JOY_1 )
//   {
//      if      ( state   & BUTTON_BTN   ) sale = BUTTON_BTN;
//      else if ( changed & BUTTON_BTN   ) sale = 0;
//
//      if      ( state   & BUTTON_START ) sale = BUTTON_START;
//      else if ( changed & BUTTON_START ) sale = 0;
//   }
//
//   return 0;
//}




//static void _blink ( u8 *str, const u16 x, const u16 y )
//{
//	u8 i   = ntsc2pal(30);
//	u8 len = strlen(str);
//
//	VDP_drawText ( str, x, y );
//
//	while ( i-- )
//	{
//		if ( i % 2  )
//		{
//			VDP_clearText ( x, y, len );
//		}
//		else
//		{
//			VDP_drawText ( str, x, y );
//		}
//
//		VDP_waitVSync();
//		VDP_waitVSync();
//	}
//
//	VDP_drawText ( str, x, y );
//}










void screen_disclaimer ( )
{
	VDP_setEnable ( false );
   VDP_drawImageEx ( APLAN, &ob_cs_disclaimer, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, 16),  0, 0, true, true );
	VDP_setEnable ( true );

   waitMs ( 3000 );

	VDP_fadePalOut ( PAL1, 30, 0 ); // genera pixeles

	VDP_setEnable ( false );
	VDP_clearTileMapRect ( APLAN, 10, 8, 21, 12 );
	VDP_setEnable ( true );
}


void screen_sega ( u16 secs, u16 buttons, u8 on_release  )
{
	const struct
	{
		u16 pal[16];
		u16 wait;
	}
	logo [ ] =
	{
		//   UNUSED       2       3       4       5       6       7       8       9  UNUSED      11      12      13      14      15      16    WAIT
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, 1000 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0FFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0777, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0FFF, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0333, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0333, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0333, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0fff, 0x0777, 0x0333, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0777, 0x0333, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0333, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  500 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0EA0 },  100 }, // 10
		{  { 0x0000, 0x0000, 0x0000, 0x0EA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0E60 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0E60, 0x0000, 0x0EA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0A20 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0A20, 0x0000, 0x0E60, 0x0000, 0x0EA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0600, 0x0000, 0x0A20, 0x0EA0, 0x0E60, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0EA0, 0x0600, 0x0E60, 0x0A20, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0000, 0x0EA0, 0x0000, 0x0E60, 0x0000, 0x0A20, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0EA0, 0x0E60, 0x0000, 0x0A20, 0x0000, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0E60, 0x0A20, 0x0000, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0A20, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 },
		{  { 0x0000, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  100 }, // 20
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },  500 },
		{  { 0x0000, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0200 },  100 },
		{  { 0x0000, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0400 },  100 },
		{  { 0x0000, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0600, 0x0600, 0x0900, 0x0920, 0x0920, 0x0920, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0600, 0x0900, 0x0920, 0x0B20, 0x0940, 0x0B70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0B70, 0x0D90, 0x0222, 0x0000, 0x0222, 0x0222, 0x0222, 0x0222, 0x0222, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0E90, 0x0EB0, 0x0333, 0x0000, 0x0333, 0x0333, 0x0333, 0x0333, 0x0333, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0444, 0x0000, 0x0444, 0x0444, 0x0444, 0x0444, 0x0444, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0676, 0x0000, 0x0676, 0x0676, 0x0676, 0x0676, 0x0676, 0x0600 },  100 }, // 30
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0999, 0x0000, 0x0999, 0x0999, 0x0999, 0x0999, 0x0999, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0DDD, 0x0000, 0x0DDD, 0x0DDD, 0x0DDD, 0x0DDD, 0x0DDD, 0x0600 },  100 },
		{  { 0x0000, 0x0600, 0x0900, 0x0B20, 0x0D40, 0x0F70, 0x0D90, 0x0FB0, 0x0FFF, 0x0000, 0x0FFF, 0x0FFF, 0x0FFF, 0x0FFF, 0x0FFF, 0x0600 }, 4000 },
		{  { 0x0000, 0x0400, 0x0400, 0x0600, 0x0920, 0x0940, 0x0940, 0x0970, 0x0999, 0x0000, 0x0999, 0x0999, 0x0999, 0x0999, 0x0999, 0x0400 },  100 },
		{  { 0x0000, 0x0200, 0x0200, 0x0400, 0x0400, 0x0620, 0x0420, 0x0640, 0x0676, 0x0000, 0x0676, 0x0676, 0x0676, 0x0676, 0x0676, 0x0200 },  100 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 }, 1000 },
		{  { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },    0 },
	};

	tool_showBmp ( PAL1, (struct genresTiles*) &ob_logo_Sega, HOW_TO_PLAY_TILE, APLAN, 14, 12, 0 );

	u8 x = 0;

	while ( logo[x].wait )
	{
		VDP_setPalette ( PAL1, logo[x].pal ); // tool_setPalette ( PAL1, logo[x].pal );
		waitMs ( logo[x].wait );

		//const u16 vel = IS_PALSYSTEM ? 50 : 60;
		//if ( _wait_hz( logo[x].wait * vel / 1000, buttons, on_release ) ) return;

		++x;
	}
}


void screen_oooklab ( u16 secs, u16 buttons, u8 on_release )
{
	if ( 0 || DEVELOPEMENT )
	{
		return;
	}

	tool_reset();
	resetSprites();
	music_stop();

	tool_showBmp ( PAL0, (struct genresTiles*) &ob_logo_OookLab, HOW_TO_PLAY_TILE, APLAN, 12, 12, 0 );

	//JOY_waitPressTime ( JOY_1, BUTTON_BTN, 3000 );
	waitMs ( 3000 );

	tool_planHide();

   VDP_fadeOutAll ( 30, false );
}




void screen_griels ( u16 secs, u16 buttons, u8 on_release )
{
	return;

	tool_reset();

//	VDP_drawText ( "                 RK709EX                ",  0, 10 );
//	VDP_drawText ( "                                        ",  0, 11 );
//	VDP_drawText ( "     GRIEL'S QUEST FOR THE SANGRAAL     ",  0, 12 );
//	VDP_drawText ( "                                        ",  0, 13 );
//	VDP_drawText ( "          - EXTENDED EDITION -          ",  0, 14 );
//	VDP_drawText ( "                                        ",  0, 15 );
//	VDP_drawText ( "                                        ",  0, 16 );
//	VDP_drawText ( "           26th December 2005           ",  0, 17 );

	VDP_drawText ( "      GRIEL'S QUEST FOR THE PORRON      ",  0, 10 );
	VDP_drawText ( "       FOR SEGA MEGADRIVE/GENESIS       ",  0, 12 );
	VDP_drawText ( "                                        ",  0, 15 );
	VDP_drawText ( "                                        ",  0, 17 );
	VDP_drawText ( "          SPECIAL VERSION FOR           ",  0, 19 );
	VDP_drawText ( "          RETROBARCELONA 2014           ",  0, 21 );

	// (C) de copyright el guión bajo (_)

	//_wait ( secs,  buttons, on_release );
	waitMs ( secs );

	tool_reset();
}





u16 _typeTextHalt ( u8 *str, u8 x, u8 y, u16 ms )
{
	u8 i, len = strlen ( str );

	for ( i=0; i<len; i++ )
	{
		u8  chr[2] = { *str++ };

		VDP_drawText ( chr, x++, y );

		//if ( joy1.state & BUTTON_BTN   ) return BUTTON_BTN;
		//if ( joy1.state & BUTTON_START ) return BUTTON_START;
		if ( joy1_pressed_abc   ) return BUTTON_ABC;
		if ( joy1_pressed_start ) return BUTTON_START;

		waitMs(ms);
	}

	return 0;
}


u16 _typeTextHalt2 ( u8 *str, u8 x, u8 y, u16 ms, u16 *pal1, u16 *pal2  )
{
	u8 i, len = strlen ( str );

	for ( i=0; i<len; i++ )
	{
		u8  chr[2] = { *str++ };
		VDP_drawText ( chr, x++, y );

		//if ( joy1.state & BUTTON_BTN   ) return BUTTON_BTN;
		//if ( joy1.state & BUTTON_START ) return BUTTON_START;
		if ( joy1_pressed_abc   ) return BUTTON_ABC;
		if ( joy1_pressed_start ) return BUTTON_START;

      VDP_setPalette ( PAL1, ( i % 2 ) ? pal1 : pal2 );
      VDP_waitVSync();
		waitMs(ms);
	}

	return 0;
}


//u16 screen_options ( )
//{
//	u16 joy    = 0;
//	u16 option = SCREEN_NEW_GAME;
//	u16 fx     = 0; //FX_NEW_GAME;
//
//	fx = 1; // quita warning
//
//	VDP_setEnable(FALSE);
//
//	_display ( 13,9, 16, 7, " MENU " );
//
//	VDP_drawText ( "New Game", 17, 11 );
//	VDP_drawText ( "Continue", 17, 13 );
//
//	VDP_setEnable ( TRUE );
//
//
//	while ( TRUE )
//	{
//		VDP_drawText ( " ", 15, 11 );
//		VDP_drawText ( " ", 15, 13 );
//
//		if ( option == SCREEN_NEW_GAME ) VDP_drawText ( ">", 15, 11 );
//		if ( option == SCREEN_CONTINUE ) VDP_drawText ( ">", 15, 13 );
//
//		if ( option != SCREEN_NEW_GAME && joy & BUTTON_UP   ) { /*fx_play ( FX_DING );*/ option = SCREEN_NEW_GAME; /*fx = FX_NEW_GAME;*/ } // revisar los FX_*.
//		if ( option != SCREEN_CONTINUE && joy & BUTTON_DOWN ) { /*fx_play ( FX_DING );*/ option = SCREEN_CONTINUE; /*fx = FX_CONTINUE;*/ } // que tiene que sonar en cada caso?
//
//		if ( joy & BUTTON_BTN  )
//		{
//			_release ( joy, JOY_1 );
//			break;
//		}
//
//		joy = JOY_waitPress ( JOY_1, BUTTON_ALL );
//	}
//
//
//	//fx_play ( fx );
//	// fadeout_al_menu()
//
//	return option;
//}


void screen_gameover ( )
{
	tool_reset();

	splist_hide_sprites();

//	text_init ( (genresSprites*) &cs_font_16x16, 1200, PAL0 );
	text_draw_sprite   ( "GAME OVER", 88, 104, 80 );

	waitMs(4000);

	tool_planHide();
	resetSprites();
	waitMs(1000);

	music_stop();
}






void screen_ending ( )
{
	tool_planHide();
	tool_reset();



	// 1
	tool_showBmp ( PAL2, (struct genresTiles*) &ob_ending_1, HOW_TO_PLAY_TILE, APLAN, 12, 5, 60 );
	//fx_play(FX_UAAAH);
	waitMs(1000);

	musiclist_play ( MUSIC_ENDING_3 );

	tool_typeText ( "The Sangraal has been found", 7, 15, 100 );
	tool_typeText ( "and now its power fills the", 7, 17, 100 );
	tool_typeText ( "air with a holy light...   ", 7, 19, 100 );
	tool_typeText ( "Only Griel stands still... ", 7, 21, 100 );

	//_wait ( 8, BUTTON_BTN, TRUE );
	waitMs(8000);

	tool_planHide();
	waitMs(500);


	// 2
	tool_showBmp ( PAL2, (struct genresTiles*) &ob_ending_2, HOW_TO_PLAY_TILE, APLAN, 12, 5, 60 );
	waitMs(1000);

	tool_typeText ( "A white ray of pure light  ", 7, 15, 100 );
	tool_typeText ( "is released from the Grial ", 7, 17, 100 );
	tool_typeText ( "and casts a sacred thunder ", 7, 19, 100 );
	tool_typeText ( "that destroys the Devil... ", 7, 21, 100 );

	//_wait ( 8, BUTTON_BTN, TRUE );
	waitMs(8000);

	tool_planHide();
	waitMs(500);


	// 3
	tool_showBmp ( PAL2, (struct genresTiles*) &ob_ending_3, HOW_TO_PLAY_TILE, APLAN, 12, 5, 60 );
	waitMs(1000);

	tool_typeText ( "Sir Griel has vanquished   ", 7, 15, 100 );
	tool_typeText ( "the Archenemy and restored ", 7, 17, 100 );
	tool_typeText ( "the Sangraal to its dwell. ", 7, 19, 100 );
	tool_typeText ( "Our Planet is safe again.  ", 7, 21, 100 );

	//_wait ( 8, BUTTON_BTN, TRUE );
	waitMs(8000);

	tool_planHide();
	waitMs(500);


	// 4
	VDP_setEnable ( FALSE );

	splist_hide_sprites();
	VDP_updateSprites();

//	text_init ( (genresSprites*) &cs_font_16x16, 1200, PAL0 );
	text_draw_sprite ( "THE END", 13*8, 7*8, 0 );

	VDP_drawText ( "Thank you for playing!", 9, 14 );
	VDP_drawText ( "¡2015 Oook!Lab", 13, 16 );

	const u16 _palette [ 16 ] = { 0x0000, 0x000f, 0x0444, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };

	VDP_setTextPalette ( PAL2 );
	VDP_setPalette ( PAL2, _palette );
	VDP_drawText ( "!", 23, 16 );


	VDP_setEnable ( TRUE );

	waitMs ( 17000 ); // 17 segundos de espera y luego el staff
	//_wait ( 120, BUTTON_BTN, TRUE );
	waitMs(8000);


	tool_planHide();
	resetSprites();

	waitMs(1000);

	music_stop();
}



void screen_sound_test ()
{
	u16
		option = 0,
		music  = 0,
		sound  = 0,
		max1   = MUSIC_MAX,
		max2   = PSG_MAX,
		pos    = 12;



	VDP_setEnable(false);

	SYS_disableInts();

//	resetScreen();
//	resetScroll();
//	//resetVRAM();

	music_stop();

//	struct mappyLevel lvl = { PAL1, 900, 0, APLAN, (struct mappyResource*) &cb_soundtest };
//	mappy_all ( &lvl, 0, 0, 0, 0, 40, 28, 0 );

	font_init();
	text_init ( (struct genresSprites *) &cs_font_16x16, 1200, PAL0 );
	text_draw ( "SOUND TEST", 10, 3, 20 ) ;

	VDP_setTextPalette(PAL0);
	VDP_setPalette(PAL0, (u16*) font_getPalette());

	SYS_enableInts();
	VDP_setEnable(true);




	while ( true )
	{
		MUSIC *track = musiclist_get ( music );
		PSG   *psg   = psglist_get     ( sound );

		if ( option == 0 ) pos = 12;
		if ( option == 1 ) pos = 14;
		if ( option == 2 ) pos = 19;

		VDP_drawText ( " ", 14, 12 );
		VDP_drawText ( " ", 14, 14 );
		VDP_drawText ( " ", 14, 19 );
		VDP_drawText ( ">                   ", 14, pos );

		VDP_drawText ( track->title , 16, 12 );
		VDP_drawText ( psg->title ,   16, 14 );
		VDP_drawText ( "Back",        16, 19 );

		JOY_waitPress ( JOY_1, BUTTON_ALL );

		if ( ( joy1_pressed_right ) && ( option == 0 ) && ( music < max1 ) ) music++;
		if ( ( joy1_pressed_left  ) && ( option == 0 ) && ( music > 0    ) ) music--;
		if ( ( joy1_pressed_abc || joy1_pressed_start   ) && ( option == 0 )                     ) musiclist_play ( music );

		if ( ( joy1_pressed_right ) && ( option == 1 ) && ( sound < max2 ) ) sound++;
		if ( ( joy1_pressed_left  ) && ( option == 1 ) && ( sound > 0    ) ) sound--;
		if ( ( joy1_pressed_abc || joy1_pressed_start ) && ( option == 1 )                     ) psglist_play ( sound );

		if ( ( joy1_pressed_down  ) && ( option <  2 ) ) { psglist_play(PSG_SELECT); option++; }
		if ( ( joy1_pressed_up    ) && ( option >  0 ) ) { psglist_play(PSG_SELECT); option--; }
		if ( ( joy1_pressed_abc || joy1_pressed_start ) && ( option == 2 ) ) { psglist_play(PSG_WRONG); waitMs(500); break; }
	}

	music_stop();
	//music_override_repeat ( AUTO );
	//music_override_repeat ( 2 );

	VDP_fadeOutAll(30, false );
}







void screen_staff()
{
	u16 i;
	u8 wait1 = ntsc2pal(69);


	musiclist_play ( MUSIC_STAFF );
	tool_reset();
//	text_init ( (genresSprites*) &cs_font_16x16, 1200, PAL0 );



	u16 tiles[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	VDP_setScrollingMode ( HSCROLL_TILE, VSCROLL_PLANE );

	static const u16 _pal [ 16 ] = { 0x0000, 0x00FF, 0x0044, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 };

	VDP_setPalette ( PAL2, _pal );





	tiles[8] = 8;
	tiles[9] = 8;
	tiles[22] = 4;
	tiles[24] = 4;

	VDP_setHorizontalScrollTile ( PLAN_A, 0, tiles, 28, 0 );

	text_draw ( "GRIEL'S QUEST",    6, 8, wait1 ) ;
	text_draw ( "FOR THE SANGRAAL", 4, 12, wait1 ) ;

	tool_typeText( "Sega", 18, 20, wait1 );
	tool_typeText( "Megadrive/Genesis", 11, 22, wait1 ); // desp 4
	tool_typeText( "version", 16, 24, wait1 ); // desp 4

	waitMs(ntsc2pal(3000));
	tool_planHide();



	///////////////////////////



	tiles[9]  = 0;
	tiles[8]  = 0;
	tiles[17] = 4;
	tiles[22] = 0;
	tiles[24] = 0;

	VDP_setHorizontalScrollTile ( PLAN_A, 0, tiles, 28, 0 );

	tool_typeText( "Based on", 16, 6, wait1);

	tool_showBmp ( PAL1, (struct genresTiles*) &ob_logo_Karoshi, HOW_TO_PLAY_TILE, APLAN, 12, 10, wait1 );

	u16 colores[17*3] =
	{
		 0, 0x111, 0, 0, 0x222, 5, 0, 0x333, 0, 0, 0x444, 5, 0, 0x555, 0, 0, 0x666, 5, 0, 0x777, 0, 0, 0x888, 5,
		 0, 0x999, 0, 0, 0xAAA, 5, 0, 0xBBB, 0, 0, 0xCCC, 5, 0, 0xDDD, 0, 0, 0xEEE, 5, 0, 0xFFF, 0, 0, 0x000, 5,
		17, 0xFFF, 0
	};

	for ( i=0; i<17*3; i+=3 )
	{
		VDP_setPaletteColor ( colores[i+0], colores[i+1] );
		waitMs(colores[i+2]);
	}

	tool_typeText( "Griel's Quest",    13, 17, wait1 );
	tool_typeText( "for the Sangraal", 12, 19, wait1 );
	tool_typeText( "Extended Edition", 12, 21, wait1 );


	waitMs(ntsc2pal(3000));
	tool_planHide();




	//////////////////////////////


	tiles[17] = 0;

	VDP_setHorizontalScrollTile ( PLAN_A, 0, tiles, 28, 0 );
	//VDP_setScrollingMode ( HSCROLL_PLANE, VSCROLL_PLANE ); // --> no parece funcionar

	VDP_setReg(0x0B, 0);//  resete el scroll


	VDP_setHorizontalScroll ( PLAN_A, 0 );
	VDP_setHorizontalScroll ( PLAN_B, 0 );


	//////////////////////////////


	//tool_showBmp_bn ( PAL1, (struct genresTiles*) &ob_title_2, HOW_TO_PLAY_TILE, BPLAN, 8, 12, wait1 );
	//SYS_setVIntCallback ( (_voidCallback*) _desplazar_fondo );


	//////////////////////////////



	tool_typeText( "David Sanchez",     15,  9, wait1 );
	VDP_setTextPalette(PAL2);
	tool_typeText( "@DavidBonus",       15, 11, wait1 );
	VDP_setTextPalette(PAL0);

	tool_typeText( "Music production,", 15, 14, wait1 );
	tool_typeText( "sound effects,",    15, 16, wait1 );
	tool_typeText( "testing and ",      15, 18, wait1 );
	tool_typeText( "other",             15, 20, wait1 );

	waitMs(ntsc2pal(3000));
	tool_planHide_Ex(APLAN);


	tool_typeText( "Daniel Nevado",      16, 10, wait1 );
	VDP_setTextPalette(PAL2);
	tool_typeText( "@DaniSnowyman",      16, 12, wait1 );
	VDP_setTextPalette(PAL0);

	tool_typeText( "Graphics, sprites",  16, 15, wait1 );
	tool_typeText( "cover",              16, 17, wait1 );

	waitMs(ntsc2pal(3000));
	tool_planHide_Ex(APLAN);



	tool_typeText( "xxxxxxxxxx",      7,  8, wait1 );
	VDP_setTextPalette(PAL2);
	tool_typeText( "@",       7, 10, wait1 );
	VDP_setTextPalette(PAL0);

	tool_typeText( "Graphics, sprites",  7, 13, wait1 );
	tool_typeText( "cover",              7, 15, wait1 );
	tool_typeText( "no-se-que más",      7, 17, wait1 );

	waitMs(ntsc2pal(3000));
	tool_planHide_Ex(APLAN);




	VDP_setTextPalette(PAL2);
	tool_typeText( "Mono",  10, 12, wait1 );
	VDP_setTextPalette(PAL0);

	tool_typeText( "pharse or text",  10, 15, wait1 );
	tool_typeText( "Programming and", 10, 17, wait1 );
	tool_typeText( "no-se-que mas",   10, 19, wait1 );
	tool_typeText( "tal tal y tal",   10, 21, wait1 );

	waitMs(ntsc2pal(3000));
	tool_planHide_Ex(APLAN);



	tool_typeText( "Tester nb 1",     16, 10, wait1 );
	VDP_setTextPalette(PAL2);
	tool_typeText( "@Tester1Twitter", 16, 12, wait1 );
	VDP_setTextPalette(PAL0);

	tool_typeText( "Tester nb 2",     16, 15, wait1 );
	VDP_setTextPalette(PAL2);
	tool_typeText( "@Tester1Twitter", 16, 17, wait1 );
	VDP_setTextPalette(PAL0);


	tool_typeText( "Tester nb 2",     16, 20, wait1 );
	VDP_setTextPalette(PAL2);
	tool_typeText( "@Tester1Twitter", 16, 22, wait1 );
	VDP_setTextPalette(PAL0);

	tool_typeText( "Testing",         16, 25, wait1 );

	waitMs(ntsc2pal(3000));
	tool_planHide_Ex(APLAN);


	VDP_setPalette(PAL0,palette_black);

	VDP_drawText ( "Thank to:",               8,  5 );
	VDP_drawText ( "Brusito",                10,  9 );
	VDP_drawText ( "Eduardo Robsy",          10, 11 );
	VDP_drawText ( "Jon Cortazar",           10, 13 );
//	VDP_drawText ( "People at SpritesMind",  10, 15 );
//	VDP_drawText ( "Stef Dallongevile",      10, 17 );
//	VDP_drawText ( "Shiru",                  10, 19 );

	VDP_fadePalIn ( PAL0, font_getPalette(), 60, 1 );
	VDP_waitFadeCompletion();

	VDP_setPalette ( PAL0, font_getPalette() );





	waitMs(ntsc2pal(9000));
	tool_planHide();

	//SYS_setVIntCallback ( (_voidCallback*) _fnull );

	VDP_setHorizontalScroll ( PLAN_A, 0 );
	VDP_setHorizontalScroll ( PLAN_B, 0 );


//	VDP_drawText ( "...and you", 15, 13 );
//	VDP_drawText ( "Thanks for playing", 11, 15 );

	VDP_drawText ( "...and you", 15, 14 );


	//_wait ( 5, BUTTON_ALL, 0 );
	waitMs(5000);


	tool_planHide();
}