#include "task1.h"
using namespace std;
unsigned int getPrime(unsigned int n) {
    unsigned int cnt = 0;
    unsigned int numb = 2;
    while (cnt < n){
        bool isPrime = true;
        for (unsigned int i = 2; i <= sqrt(numb); i++) {


            if (numb % i == 0){
                isPrime = false;
                break;
            }

        }
        if (isPrime) {
            cnt++;
            //cout << cnt << " " << numb << "\n";
        }
        numb++;

    }
    return --numb;


}


