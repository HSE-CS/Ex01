#include "task1.h"
unsigned int task1::getPrime(unsigned int n)
{
	int count = 0, i = 2;
	while (count != n) {
		int f = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) {
				f = 1;
				break;
			}
		}
		if (!f)
			count++;
		++i;
		
	
	}
	return i-1;
}

