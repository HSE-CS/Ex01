//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//#include "task1.h"
//
//int main()
//{
//	unsigned int n;
//	printf("Enter the number");
//	scanf();
//		
//}

#include <iostream>
#include <cmath>

using namespace std;


//функци€ проверки числа n на простоту
bool isprime(int n)
{
	bool r = true; //изначально считаем, что число простое
	if (n % 2) // провер€ем n на чЄтность
	{
		for (int i = 3; i < sqrt(n); i += 2) //перебираем все нечЄтные числа до корн€ из n
		{
			if (!(n % i)) //если n делитс€ на это число без остатка, то...
			{
				r = false; //... число составное
				break; //досрочно выходим из цикла
			}
		}
	}
	else //если n чЄтное, то...
	{
		r = false; //... число составное
	}
	return r;
}

int main()
{
	int a, b, count = 0;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	for (int i = a; i <= b; i++)
	{
		if (isprime(i))
		{
			cout << i << " ";
			count++;
		}
	}
	cout << endl << "count = " << count;
}