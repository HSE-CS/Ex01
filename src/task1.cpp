#include <cmath>
#include "task1.h"

bool checkPrime(unsigned int value) {

	if ( value < 2 )
		return false;

	unsigned int v = (unsigned int) sqrt( (double) value) + 1;

	for (auto i = 2U; i < v; i++) {
		if ( value % i == 0 )
			return false;
	}

	return true;
}

unsigned int getPrime(unsigned int n) {

	unsigned t{1};

	do {
		t++;
		if ( checkPrime(t) )
			n--;

	} while ( n );

	return t;
}