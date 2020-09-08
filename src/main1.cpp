#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{

	int n;
	int ch;
	scanf("%d", &n);
	ch = getPrime(n);

	printf("Find number: %d ", ch);

}