#include "task1.h"
#include <iostream>
using namespace std;

unsigned int getPrime(unsigned int n) {
	unsigned int count = 0;
	bool f = false;
	int num = -1;
	int k = 2;
	while (!f) {
		int dels = 0;
		for (int i = 2; i < k; i++) {
			if (k % i == 0) {
				dels++;
			}
		}
		if (dels == 0) {
			count++;
			if (count == n) {
				f = true;
				num = k;
				break;
			}
		}
		k++;
	}
	return num;
}
