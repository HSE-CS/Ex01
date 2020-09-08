#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int getPrime(unsigned int n)
{   
	unsigned int count = 1, number=2, i=2, count_del=0;
	while (count <= n)
	{
		while (i*i <= number && count_del == 0)
		{
			if (number % i == 0)
				count_del += 1;
			i += 1;
		}
		if (count_del == 0 && count == n)
			break;
		if (count_del == 0 && count < n)
			count += 1;
		number += 1;
		count_del = 0;
		i = 2;
	}
	return number;
}