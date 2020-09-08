#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int getPrime(unsigned int n)
{   
	int count = 1, number=2, i=2, count_del=0;
	while (count <= n)
	{
		while (i*i <= number && count_del)
		{
			if (number % i == 0)
				count_del += 1;
			count_del += 1;
		}
		if (count_del == 0)
		{
			number += 1;
			count += 1;
			count_del = 0;
		}
		else
		{	
			count_del = 0;
		}
		
	}
	return number;
}