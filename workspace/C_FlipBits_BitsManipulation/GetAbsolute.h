/*
 * getAbsolute.h
 *
 *  Created on: Jul 8, 2017
 *      Author: Supen
 */

#ifndef GETABSOLUTE_H_
#define GETABSOLUTE_H_

using namespace std;

unsigned int getAbsolute (const int n)
{
	int mask = n >> (sizeof(int) * CHAR_BIT - 1);
	return (n + mask) ^ mask;
}

// OR

int getAbsolute1 (const int n)
{
    const int ret[2] = { n, -n };
    return ret [n<0];
}

// OR

template <typename T> T getAbsolute2 (const T n)
{
	T mask = n >> (sizeof(T) * CHAR_BIT - 1);
	return (n + mask) ^ mask;
}

#endif /* GETABSOLUTE_H_ */
