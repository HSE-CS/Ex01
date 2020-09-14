#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	printf("Enter number ");
	scanf("%d", &n);
	printf("%d", getPrime(n));
}