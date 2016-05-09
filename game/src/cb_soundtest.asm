;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Exported throught MappyWin 1423
;; with help of MDPPY 0.1
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	.align 1
	.globl cb_soundtest
cb_soundtest:
	dc.w	40	; width
	dc.w	28	; height
	dc.w	16	; nbr of colors
	dc.l	cb_soundtest_pal
	dc.w	11	; nbr of tiles
	dc.l	cb_soundtest_tiles
	dc.w	1	; nbr of layers
	dc.l	cb_soundtest_maps

	.align 1
cb_soundtest_pal:
	dc.w	0xF0F
	dc.w	0x000
	dc.w	0xEEE
	dc.w	0xAAA
	dc.w	0x24E
	dc.w	0x02A
	dc.w	0xD80
	dc.w	0x22E
	dc.w	0x2DD
	dc.w	0x08E
	dc.w	0xAAE
	dc.w	0x86E
	dc.w	0x22B
	dc.w	0xEE7
	dc.w	0x000
	dc.w	0x000

	.align 1
cb_soundtest_tiles:

; tile 0
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000

; tile 1
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00003333
	dc.l	0x00033999
	dc.l	0x00039199
	dc.l	0x00039998
	dc.l	0x00039981

; tile 2
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x33333333
	dc.l	0x88888888
	dc.l	0x99999999
	dc.l	0x11111111
	dc.l	0x11111111

; tile 3
	dc.l	0x00039811
	dc.l	0x00039811
	dc.l	0x00039811
	dc.l	0x00039811
	dc.l	0x00039811
	dc.l	0x00039811
	dc.l	0x00039811
	dc.l	0x00039811

; tile 4
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x11111111

; tile 5
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x33330000
	dc.l	0x99933000
	dc.l	0x99193000
	dc.l	0x89993000
	dc.l	0x18983000

; tile 6
	dc.l	0x11983000
	dc.l	0x11983000
	dc.l	0x11983000
	dc.l	0x11983000
	dc.l	0x11983000
	dc.l	0x11983000
	dc.l	0x11983000
	dc.l	0x11983000

; tile 7
	dc.l	0x00039981
	dc.l	0x00039998
	dc.l	0x00039199
	dc.l	0x00033999
	dc.l	0x00003333
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000

; tile 8
	dc.l	0x11111111
	dc.l	0x11111111
	dc.l	0x88888888
	dc.l	0x99999999
	dc.l	0x33333333
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000

; tile 9
	dc.l	0x18993000
	dc.l	0x89993000
	dc.l	0x99193000
	dc.l	0x99933000
	dc.l	0x33330000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000

; tile 10
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000
	dc.l	0x00000000

	.align 1
cb_soundtest_maps:
	dc.l	map_bg

	.align 1
map_bg:
; line 0
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 1
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x1
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x5
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 2
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 3
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 4
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 5
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x7
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x9
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 7
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x1
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x2
	dc.w	0x5
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 8
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 9
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 10
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 11
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 12
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 13
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 14
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 15
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 16
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 17
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 18
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 19
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 20
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 21
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 22
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 23
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 24
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 25
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x3
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x4
	dc.w	0x6
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 26
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0x7
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x8
	dc.w	0x9
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
; line 27
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
	dc.w	0xA
