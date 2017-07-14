/*
 * changeBit.h
 *
 *  Created on: Jul 10, 2017
 *      Author: Supen
 */

#ifndef CHANGEBIT_H_
#define CHANGEBIT_H_

/*
 * bit = Bit index to  set, reset or toggle starting from 0.
 * FF = 1111 1111
 *              ^
 *              |
 *              0th index
 */
#define setBitD(i, bit) ( i | (1 << bit) )
#define resetBitD(i, bit) ( i & ~(1 << bit))
#define toggleBitD(i, bit) ( i ^ (1 << bit) )

/*
 * bitMask = Value to be masked with the input i based on flag.
 * If (flag == true)
 * 		i |= bitMask
 * Else
 * 		i &= ~bitMask
 */
#define setResetBitUsingConditionD(i, bitMask, flag) ( (i & ~bitMask) | (-flag & bitMask) )

unsigned char setBit (unsigned char i, unsigned int bit)
{
	return (i | (1 << bit));
}

unsigned char resetBit(unsigned char i, unsigned int bit)
{
	return (i & ~(1 << bit));
}

unsigned char toggleBit(unsigned char i, unsigned int bit)
{
	return (i ^ (1 << bit));
}

unsigned char setResetBitUsingCondition(unsigned char i, unsigned char bitMask, bool flag)
{
	return ( (i & ~bitMask) | (-flag & bitMask) );
}

#endif /* CHANGEBIT_H_ */
