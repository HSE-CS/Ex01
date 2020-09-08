
#include <stdio.h>
#include <iostream>
#include "task1.h"


unsigned int getPrime(unsigned int n)
{
	if (n == 1)
		return 2;
	n = n - 1;
	int x = 3;
	int flag = 1;
	while (n > 0)
	{
		int check = 3;
		while (check < x / 2 + 1)
		{
			if (x % check == 0)
			{
				flag = 0;
				break;
			}
			check += 2;
		}
		if (flag == 1)
		{
			n--;
			if (n == 0)
				break;
		}
		else
			flag = 1;
		x += 2;
	}

	return x;
	
}