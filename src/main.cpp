#include "header.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#include <iostream>
using namespace std;

unsigned int getPrime(unsigned int N)
{
        int  j, a,;
        a = 0;
        for (int p = 2;; p++) {
            for (j = 2; j * j <= p; j++) {
                if ((p % j) == 0)   break;
                if (j * j > p) {
                    a++;
                    if (a == N) {
                        cout << p << endl;
                        break;
                    }
                }
            }
        }
        return p;
}
