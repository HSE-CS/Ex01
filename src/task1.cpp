
#include "task1.h"
#include <stdio.h>



unsigned int getPrime(unsigned int n)
{

	int ch = 0;
	int d = 0;
	int k = 0;

	for (int i = 1; ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)	d++;
		}
		if (d == 2)
		{
			ch = i;
			++k;
			if (k == n) return ch;
		}
		d = 0;
	}

}