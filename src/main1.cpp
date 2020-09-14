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


//������� �������� ����� n �� ��������
bool isprime(int n)
{
	bool r = true; //���������� �������, ��� ����� �������
	if (n % 2) // ��������� n �� ��������
	{
		for (int i = 3; i < sqrt(n); i += 2) //���������� ��� �������� ����� �� ����� �� n
		{
			if (!(n % i)) //���� n ������� �� ��� ����� ��� �������, ��...
			{
				r = false; //... ����� ���������
				break; //�������� ������� �� �����
			}
		}
	}
	else //���� n ������, ��...
	{
		r = false; //... ����� ���������
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