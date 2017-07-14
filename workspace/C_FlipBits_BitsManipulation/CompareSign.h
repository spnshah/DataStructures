/*
 * compareSign.h
 *
 *  Created on: Jul 8, 2017
 *      Author: Supen
 */

#ifndef COMPARESIGN_H_
#define COMPARESIGN_H_

template <typename T> bool compareSign(const T x, const T y)
{
	return (x < 0) == (y < 0);
}

// OR

template <typename T> bool compareSign1(const T x, const T y)
{
	return (x >= 0) ^ (y < 0);
}
#endif /* COMPARESIGN_H_ */
