#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#include<locale.h> 


int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	printf("\nВведите целое число ");
	scanf("%d", &N);
	if (getPrime(N))
		printf("Число %d - простое\n", N);
	else printf("Число %d - составное\n", N);
	getchar ();
}
