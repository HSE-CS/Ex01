#include "task1.h"
#include <cmath>

unsigned int getPrime(unsigned int n)
{
	unsigned int answer = 2;
	unsigned int pos = 0;
	while (pos != n)
	{
		int k = 0;
		for (int div = 2; div < answer; div++)
			if (answer % div == 0)
				k = 1;
			
		if (k == 0)
			pos++;
		answer++;
	}
	return answer - 1;
}
