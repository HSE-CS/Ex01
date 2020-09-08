#include <iostream>
#include "task1.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned int res = getPrime(n);
    cout << res;
    return 0;
}
