//
// Created by User on 08.09.2020.
//

#include <iostream>

#include "task1.h"

template<typename T>
void print(T t) {
    std::cout << t << std::endl;
}

int main() {
    print(getPrime(5));
    print(getPrime(10));
    return 0;
}
