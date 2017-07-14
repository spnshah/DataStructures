/*
 * computeSign.h
 *
 *  Created on: Jul 8, 2017
 *      Author: Supen
 */

#ifndef COMPUTESIGN_H_
#define COMPUTESIGN_H_


using namespace std;

int computeSign1(const int input)
{
	return ( -(int) ((unsigned int) ((int)input) >> (sizeof(int) * CHAR_BIT - 1)) );
	// OR
	// return -(input < 0);
}

/*
 * Benefits:
 * Works for ints, floats, doubles, unsigned shorts, or any custom types constructible from integer 0 and orderable.
 * Fast! copysign is slow, especially if you need to promote and then narrow again. This is branchless and optimizes excellently
 * Standards-compliant! The bitshift hack is neat, but only works for some bit representations, and doesn't work when you have an unsigned type. It could be provided as a manual specialization when appropriate.
 * Accurate! Simple comparisons with zero can maintain the machine's internal high-precision representation (e.g. 80 bit on x87), and avoid a premature round to zero.
 *
 * Caveats:
 * It's a template so it'll take forever to compile.
 * Apparently some people think use of a new, somewhat esoteric, and very slow standard library function that doesn't even really implement signum is more understandable.
 */
template <typename T> int computeSign(const T input)
{
	return (T(0) < input) - (input < T(0));
}

#endif /* COMPUTESIGN_H_ */
