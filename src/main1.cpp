#include <iostream>
#include "../include/task1.h"
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    n = getPrime(n);
    cout << n << endl;
    return 0;
}
