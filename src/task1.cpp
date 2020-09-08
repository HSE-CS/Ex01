#include "..\include\task1.h"
#include <math.h>

unsigned int getPrime(unsigned int n)
{
	unsigned int ans = 2;
	unsigned int number = 1;
	for (number; number < n; number++) {
		int temp = ans + 1;
		int next = 0;
		int exit = 0;
		int i = 2;

		while (exit == 0)
		{
			if (temp % i == 0 && i != temp)
			{
				temp++;
				i = 2;
				continue;
			}

			if ((i == temp) || (i > sqrt(temp)))
			{
				next = temp;
				exit = 1;
			}

			i++;
		}
		ans = next;
	}
	return ans;
}
