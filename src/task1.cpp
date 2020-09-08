#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

unsigned int getPrime(unsigned int n) {
	
	unsigned int index = 1;
	unsigned int number = 2;
	while (index < n) {
		unsigned int del = 2;
		bool b = true;
		number++;
		while (b && del * del <= number) {
			if (number % del == 0) {
				b = false;
			}
			del++;
		}
		if (b) {
			index++;
		}
	}
	return number;
}
