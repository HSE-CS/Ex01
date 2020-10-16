#include <task1.h>
#include <iostream>

using namespace std;

unsigned int getPrime(unsigned int n) {

    int count = 0;
    int number;
    int k = 2;
    int a;
  

    while (1) {
        a = 0;
        for (int i = 2; i < k; i++) {
            if (k % i == 0)
                a++;         
        }

        if (a == 0) {
            count++;
            if (count == n) {
                number = k;
                break;
            }
        }
        k++;
    }

	return number;
}
