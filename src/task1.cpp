#include "task1.h"
#include <stdio.h>
#include <math.h>

unsigned int getPrime(unsigned int n)
{
	int i = 0;
	int number = 2;
	while (i < n) 
	{
		if (isPrime(number))
			i++;
		number++;

	}
	return number-1;
}
bool isPrime(unsigned int number) 
{
	unsigned int i = 2;
	for ( i = 2; i < number; i++) 
	{
		if (number % i == 0)
			return false;
	}
	return true;
}