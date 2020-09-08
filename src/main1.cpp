#include<iostream>
//#include <iomanip>
#include "task1.h"
using namespace std;

int main()
{
    unsigned int n;
    unsigned int otvet;
    cout << "Enter the number of a Prostoe chislo:";
    cin >> n;

    cout << getPrime(n);
    return 0;
}