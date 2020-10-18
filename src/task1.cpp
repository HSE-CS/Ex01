#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

unsigned int getPrime(int n) {
	int kol = 0;
	int fl = -1;
	int i = 2;
	while (kol!=n) {
		fl = is_prime(i);
		if (fl == 1) {
			kol++;
		}
		if (kol == n) {
			return i;
		}
		i++;
	}
};

int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}