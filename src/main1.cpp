//
// Created by User on 08.09.2020.
//

#include <iostream>

#include "../include/task1.h"

template<typename T>
void print(T t) {
    std::cout << t << std::endl;
}

int main() {
    print(getPrime(5));
    print(getPrime(3));
    print(getPrime(10));
    print(getPrime(1));
    print(getPrime(100000));
    return 0;
}
