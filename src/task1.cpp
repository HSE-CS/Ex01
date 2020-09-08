#include "task1.h"
static unsigned int checkPrime(unsigned int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}
unsigned int getPrime(unsigned int n) {
	int iterations = 0, i = 2, checkingnumber;
	while (iterations != n) {
		checkingnumber = checkPrime(i);
		if (checkingnumber == 1)
		{
			iterations++;
			if (iterations == n)
				return i;
			else
				i++;
		}
		else
			i++;
	}
}