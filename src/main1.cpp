//
// Created by 79875 on 08.09.2020.
//
#include<iostream>
#include <iomanip>
#include "task1.h"
using namespace std;
int main()
{
    unsigned int n;
    unsigned int otvet;
    cout << "Enter the number of a Prime number:";
    cin >> n;
    otvet=getPrime(n);
    cout << otvet;
    return 0;
}