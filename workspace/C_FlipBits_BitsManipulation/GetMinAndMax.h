/*
 * GetMinAndMax.h
 *
 *  Created on: Jul 8, 2017
 *      Author: Supen
 */

#ifndef GETMINANDMAX_H_
#define GETMINANDMAX_H_

using namespace std;

// Using #define
#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))

// OR

int getMin (const int x, const int y)
{
	return ( y ^ ((x ^ y) & -(x < y)) );
}

int getMax (const int x, const int y)
{
	return ( x ^ ((x ^ y) & -(x < y)) );
}

/*template <typename T> T getMin (const T x, const T y)
{
	return ( y ^ ((x ^ y) & -(x < y)) );
}

template <typename T> T getMax (const T x, const T y)
{
	return ((T)( x ^ ((x ^ y) & -(x < y)) ));
}*/

#endif /* GETMINANDMAX_H_ */
