*
* Modulator Offset Table
*

	dc.b	$02,$00		; Offset to modulator #0: 2
*
* Modulator Data
*

* Modulator 0 "Ship fire": Pitch
	dc.b	$00,$00			; initial value = 0
	dc.b	$18,$C4,$FF		; len = 24, slope = -60
	dc.b	0
