/**
 *   Created by Stanislav on 9/8/20.
 */

#include "task1.h"
#include <cstdio>
#include <iostream>


int main() {
    int n = 0;
    std::cin >> n;
    if (n <= 0) {
        fprintf(stderr, "ERROR : the number must be greater than zero");
        return 0;
    }
    printf("The %d-nd simple number is %d", n, getPrime(n-1));
    return 1;
}

