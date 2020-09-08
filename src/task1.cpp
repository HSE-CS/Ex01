#include <iostream>
#include <math.h>

unsigned int getPrime(unsigned int n) {
	unsigned long long int num = 1;
	for (int i = 0; i < n;) {
		++num;
		int count_del = 0;
		bool isSimple = true;
		for (int j = 1; j <= int(sqrt(num)); ++j) {
			if (num % j == 0) {
				++count_del;
			}
			if (count_del > 1) {
				isSimple = false;
				break;
			}
		}
		if (isSimple) {
			
			++i;
		}
	}
	return num;
}