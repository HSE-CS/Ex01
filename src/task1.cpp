#include <iostream>

using namespace std;

bool IfPrime(unsigned int ch){
    if (ch <= 1)
        return false;

    for (unsigned int i = 2; i < ch; i++)
        if (ch % i == 0)
            return false;
        else
            return true;
}

unsigned int getPrime(unsigned int n){

    unsigned int j = 0;
    unsigned int i = 0;

    while (j != n)
    {
        i++;
        if (IfPrime(i))
            ++j;
    }
    return i;
}