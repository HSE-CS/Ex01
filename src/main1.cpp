#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main() {
	unsigned int n = 1;
	scanf("%d", &n);
	printf("result %d", getPrime(n));
}