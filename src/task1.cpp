#include"task1.h"
#include<iostream>
using namespace std;

bool isPrime(int x) {
	for (int i = 2; i < sqrt(x); i++) {
		if (!x % i) {
			return false;
		}
	}
	return true;
}

unsigned int getPrime(int x) {
	int test = 2, count = 0;

	while (count < x) {
		if(isPrime(test)) {
			count++;
		}
		test++;
	}
	return test;
}