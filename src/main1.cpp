#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main() {
	int n;
	scanf("%d", &n);
	int f = getPrime(n);
	printf("%d", f);
}