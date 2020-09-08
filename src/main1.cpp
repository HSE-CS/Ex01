#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	unsigned int n = 0, result= 0;
	puts("Enter n:");
	scanf("%d", &n);
	result = getPrime(n);
	printf("Your simple number: %d\n", result);
}