#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
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
	getchar ();
}
