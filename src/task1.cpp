#include "task1.h"

unsigned int getPrime(unsigned int n)
{
	int counter = 0;
	int flag = 0;
	int i = 1, j = 0;
	while (counter != n)
	{
		i += 1;
		for (j = 2; j < i; j += 1)
		{
			if (i%j == 0)
				flag = 0;
		}
	}



	
}