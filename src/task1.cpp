#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

unsigned int getPrime(int n) {
	int kol = 0;
	int fl = -1;
	for (int i = 1; i < 100; i++) {
		fl = is_prime(i);
		if (fl == 1) {
			kol++;
		}
		if (kol == n) {
			return i;
		}
	}
};

int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			// Нашли делитель - число непростое,
			// можем выходить из функции и возвращать 0
			return 0;
	}
	// Просмотрели всех кандидатов,
	// делителей не нашли, возвращаем 1
	return 1;
}