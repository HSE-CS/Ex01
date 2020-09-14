#include"task1.h"
#include<iostream>
using namespace std;

bool isPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (!(x % i)) {
			return false;
		}
	}
	return true;
}

unsigned int getPrime(int x) {
	int test = 1, count = 0, prime = 2;

	while (count < x) {
		test++;
		if (isPrime(test)) {
			count++;
			prime = test;
		}
	}
	return prime;
}