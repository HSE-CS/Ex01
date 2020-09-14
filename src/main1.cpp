#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main() {
    int n = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", getPrime(n));
     

	return 0;
}