	.arch msp430g2553
	.text
	.global updateHeights
	.extern limitFlag
	.extern currentHeight
	.extern currentStart
	.extern currentEnd
	.extern screenHeight
	.extern screenWidth

updateHeights:
	sub.b #20, &currentHeight
	add.b #5, &currentStart
	sub.b #10, &currentEnd
	inc.b &limitFlag
	cmp #5, &limitFlag
	jnz limitFlagElse
	mov #4, r12
	call #transition_state

limitFlagElse:
	pop r0
