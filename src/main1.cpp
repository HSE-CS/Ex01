#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <string.h>
#include <time.h>
#include <locale.h>
#include "task1.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	puts("������� n-�� ������� �����, ������� ����� ����������:  ");
	unsigned int n;
	scanf("%u", &n);
	unsigned int a;
	a = getPrime(n);
	printf("\n%u\n", a);
}
=======
#include "task1.h"
#include<locale.h> 


int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	printf("\n������� ����� ����� ");
	scanf("%d", &N);
	if (getPrime(N))
		printf("����� %d - �������\n", N);
	else printf("����� %d - ���������\n", N);
	return 0;
}
>>>>>>> 2ae2c89b32a979902ba4d7638feb157ff45384db
