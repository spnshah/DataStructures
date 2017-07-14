/*
 * countBitsSet.h
 *
 *  Created on: Jul 10, 2017
 *      Author: Supen
 */

#ifndef COUNTBITSSET_H_
#define COUNTBITSSET_H_

static unsigned char BitSetLookUpTable[256];

void createBitSetTable()
{
	BitSetLookUpTable[0] = 0;
	for (int i = 0; i < 256; i++)
	{
		BitSetLookUpTable[i] = (i & 1) + BitSetLookUpTable[i/2];
	}
}

unsigned char countBitsSet(unsigned char n)
{
	for (int i = 0; i < 256; i++)
	{
		cout << hex << int(BitSetLookUpTable[i]) << endl;
	}
	return BitSetLookUpTable[n];
}

#endif /* COUNTBITSSET_H_ */
