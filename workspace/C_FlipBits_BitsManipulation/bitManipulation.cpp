/*
 * bitManipulation.cpp
 *
 *  Created on: Jul 6, 2017
 *      Author: Supen
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include "FlipBits.h"
#include "ComputeSign.h"
#include "CompareSign.h"
#include "GetAbsolute.h"
#include "GetMinAndMax.h"
#include "PowerOf2.h"
#include "changeBit.h"
#include "countBitsSet.h"

int main()
{
	// Flip the bits
	unsigned char bits = 0xEE;
	printf ("Flipped bits using bit shifting: %x.\n", flipBits(bits));
	printf ("Flipped bits using look up table: %x.\n", table[bits]);

	// Compute the sign of an integer
	cout << "Sign is : " << computeSign(-1111111111111111) << endl;

	// Compare signs of two number
	string result = compareSign1(-0.1, 0.0) ? "SAME" : "Different";
	cout << "Signs are " << result << endl;

	// Get absolute value
	int n = -34;
	cout << "Absolute value of " << n << " is " << getAbsolute(n) << endl;

	// Find min and max value
	cout << "Min(3.548796, 3.548795) is : " << getMin(3, 4) << endl;
	cout << "Max(3.548796, 3.548795) is : " << getMax(3, 4) << endl;
	//cout << "Min(Supen, Super) is : " << getMin("Supen", "Super");
	cout << "Using #define: Min(3.548796, 3.548795) is : " << max(3, 548795) << endl;

	// Find if a number is power of 2.
	cout << "isPowerOfTwo(256)" << isPowerOfTwo(256) << endl;

	// Manipulate a particular bit
	cout << "Set bit using #define, setBitD(10, 3): " << setBitD(10, 3) << endl;
	cout << "Reset bit using #define, resetBitD(10, 3): " << resetBitD(10, 3) << endl;
	cout << "Toggle bit using #define, toggleBitD(10, 3): " << toggleBitD(10, 3) << endl;
	cout << "Toggle bit using #define and on a condition, setResetBitUsingConditionD(10, 3, 1): " << setResetBitUsingConditionD(10, 3, 1) << endl;
	cout << "Toggle bit using #define and on a condition, setResetBitUsingConditionD(10, 3, 0): " << setResetBitUsingConditionD(10, 3, 0) << endl;

	cout << "Set bit, setBit(10, 3): " << hex << int(setBit(0x10, 3)) << endl;
	cout << "Reset bit, resetBit(10, 3): " << int(resetBit(0x10, 3)) << endl;
	cout << "Toggle bit, toggleBitD(10, 3): " << int(toggleBit(0x10, 3)) << endl;
	cout << "Toggle bit on a condition, setResetBitUsingConditionD(10, 3, 1): " << int(setResetBitUsingCondition(0x10, 0x3, 1)) << endl;
	cout << "Toggle bit on a condition, setResetBitUsingConditionD(10, 3, 0): " << int(setResetBitUsingCondition(0x10, 0x3, 0)) << endl << dec << endl;

	// Find the number of bits set in the input
	createBitSetTable();
	cout << "Count bits set in countBitsSet(0xFF): " << hex << int(countBitsSet(0x76)) << endl;
}
