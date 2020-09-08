#include "task1.h"
#include <stdio.h>
#include <iostream>

using namespace std;

unsigned int getPrime(unsigned int number)
{
	int buck = 0;
	int check = 1;
	int f = 0;
	int t = 2;
	while (buck != number)
	{
		
		for (int i = 2; i < t; i++)
		
		{
			if (t % i == 0 && t != 2)
			{
				check = 0;
				break;
			}
			  
		}
		
		if (check != 0)
			buck++;
		
		if (buck == number)
			break;
		
		check = 1;
		t++;
	}
	return t;
}
