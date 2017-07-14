/*
 * PowerOf2.h
 *
 *  Created on: Jul 9, 2017
 *      Author: Supen
 */

#ifndef POWEROF2_H_
#define POWEROF2_H_

template <typename T> bool isPowerOfTwo (const T x)
{
	return (x != 0) && ( (x & (x - 1)) == 0 );
}

#endif /* POWEROF2_H_ */
