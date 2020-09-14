#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main() {
	unsigned int n;
	printf("Enter the number between 1 and 10\n");
	scanf("%d", &n);
	int e = getPrime(n);
	printf("%d", e);
	
	printf("\n");
}