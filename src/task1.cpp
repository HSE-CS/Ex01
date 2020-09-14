#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#define CRT_SECURE_NO_WARNINGS

unsigned int getPrime(unsigned int n)
{
	unsigned int a = 2;
	unsigned int c = 1;
	int b = 0;
	while (c != n)
	{
		a++;
		b = 0;
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0)
				b++;
		}
		if (b == 2)
			c++;
	}
	return(a);
}