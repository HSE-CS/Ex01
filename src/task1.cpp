#include "task1.h"
unsigned int task1::getPrime(unsigned int n)
{
	unsigned int searchedPrime = 0, counter = 1, currentNumber = 2, i = 0, passed = 1;
	unsigned int* primeNumbers;

	primeNumbers = (unsigned int*)calloc(n, sizeof(unsigned int));
	primeNumbers[0] = 2;

	while (counter < n) {
		passed = 1;
		i = 0;
		while (i < counter && passed) {
			if (currentNumber % primeNumbers[i] == 0 || currentNumber == primeNumbers[i]) {
				passed = 0;
			}
			i++;
		}
		if (passed) {
			primeNumbers[counter] = currentNumber;
			counter++;
		}
		currentNumber++;
	}

	searchedPrime = primeNumbers[counter - 1];
	free(primeNumbers);

	return searchedPrime;
}

