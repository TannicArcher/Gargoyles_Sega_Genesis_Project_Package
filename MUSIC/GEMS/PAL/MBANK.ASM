*
* Modulator Offset Table
*

	dc.b	$1C,$00		; Offset to modulator #0: 28
	dc.b	$2E,$00		; Offset to modulator #1: 46
	dc.b	$34,$00		; Offset to modulator #2: 52
	dc.b	$46,$00		; Offset to modulator #3: 70
	dc.b	$4F,$00		; Offset to modulator #4: 79
	dc.b	$55,$00		; Offset to modulator #5: 85
	dc.b	$82,$00		; Offset to modulator #6: 130
	dc.b	$8B,$00		; Offset to modulator #7: 139
	dc.b	$94,$00		; Offset to modulator #8: 148
	dc.b	$9D,$00		; Offset to modulator #9: 157
	dc.b	$A6,$00		; Offset to modulator #10: 166
	dc.b	$AC,$00		; Offset to modulator #11: 172
	dc.b	$B5,$00		; Offset to modulator #12: 181
	dc.b	$C7,$00		; Offset to modulator #13: 199
*
* Modulator Data
*

* Modulator 0 "Vib": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$08,$0F,$00		; len = 8, slope = 15
	dc.b	$08,$E2,$FF		; len = 8, slope = -30
	dc.b	$08,$1E,$00		; len = 8, slope = 30
	dc.b	$08,$E2,$FF		; len = 8, slope = -30
	dc.b	$08,$0F,$00		; len = 8, slope = 15
	dc.b	0
* Modulator 1 "2b ramp dwn": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$30,$F7,$FF		; len = 48, slope = -9
	dc.b	0
* Modulator 2 "vib 2": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$05,$0A,$00		; len = 5, slope = 10
	dc.b	$05,$EC,$FF		; len = 5, slope = -20
	dc.b	$05,$14,$00		; len = 5, slope = 20
	dc.b	$05,$EC,$FF		; len = 5, slope = -20
	dc.b	$05,$0A,$00		; len = 5, slope = 10
	dc.b	0
* Modulator 3 "bend": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$0C,$19,$00		; len = 12, slope = 25
	dc.b	$0C,$E7,$FF		; len = 12, slope = -25
	dc.b	0
* Modulator 4 "fall": Pitch
	dc.b	$D6,$06			; initial value = 1750
	dc.b	$45,$D6,$FF		; len = 69, slope = -42
	dc.b	0
* Modulator 5 "Copy of Vib": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$0A,$08,$00		; len = 10, slope = 8
	dc.b	$0A,$F0,$FF		; len = 10, slope = -16
	dc.b	$0A,$10,$00		; len = 10, slope = 16
	dc.b	$0A,$F0,$FF		; len = 10, slope = -16
	dc.b	$0A,$10,$00		; len = 10, slope = 16
	dc.b	$0A,$F0,$FF		; len = 10, slope = -16
	dc.b	$0A,$10,$00		; len = 10, slope = 16
	dc.b	$0A,$F0,$FF		; len = 10, slope = -16
	dc.b	$0A,$10,$00		; len = 10, slope = 16
	dc.b	$0A,$F0,$FF		; len = 10, slope = -16
	dc.b	$0A,$10,$00		; len = 10, slope = 16
	dc.b	$0A,$F0,$FF		; len = 10, slope = -16
	dc.b	$0A,$10,$00		; len = 10, slope = 16
	dc.b	$0A,$F8,$FF		; len = 10, slope = -8
	dc.b	0
* Modulator 6 "Falling": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$18,$E0,$FF		; len = 24, slope = -32
	dc.b	$04,$00,$00		; len = 4, slope = 0
	dc.b	0
* Modulator 7 "Iris Open": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$10,$40,$00		; len = 16, slope = 64
	dc.b	$10,$40,$00		; len = 16, slope = 64
	dc.b	0
* Modulator 8 "Iris Close": Pitch
	dc.b	$B8,$0B			; initial value = 3000
	dc.b	$10,$81,$FF		; len = 16, slope = -127
	dc.b	$10,$81,$FF		; len = 16, slope = -127
	dc.b	0
* Modulator 9 "Power Up 1": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$18,$40,$00		; len = 24, slope = 64
	dc.b	$06,$00,$00		; len = 6, slope = 0
	dc.b	0
* Modulator 10 "Null": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$01,$00,$00		; len = 1, slope = 0
	dc.b	0
* Modulator 11 "up 14 in 20": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$08,$DC,$00		; len = 8, slope = 220
	dc.b	$0C,$A0,$00		; len = 12, slope = 160
	dc.b	0
* Modulator 12 "4,-127": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$02,$00,$02		; len = 2, slope = 512
	dc.b	$02,$81,$FF		; len = 2, slope = -127
	dc.b	$02,$7F,$00		; len = 2, slope = 127
	dc.b	$02,$00,$FF		; len = 2, slope = -256
	dc.b	$02,$81,$FF		; len = 2, slope = -127
	dc.b	0
* Modulator 13 "Untitled Pitch #13": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	0
