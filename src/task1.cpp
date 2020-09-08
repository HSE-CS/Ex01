#include "task1.h"
using namespace std;

unsigned int getPrime(unsigned int n)
{
	int counter = 0;              //cчитает номер простого числа
	int flag = 0;
	int i = 1, j = 0;
	while (counter != n)
	{
		flag = 0;
		i += 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				flag = 1;
		}
		if (flag == 0)
			counter += 1;
	}
	return i;
}