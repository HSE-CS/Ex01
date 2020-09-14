#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"



int main()
{
	puts("enter n");
	unsigned int n;
	scanf("%u", &n);
	unsigned int a;
	a = getPrime(n);
	printf("\n %u\n", a);
}