#include "../include/task1.h"

int checkPrime(int x){
    for (int i = 2; i < x/2 + 1; i++) {
        if ((x%i) == 0){
            return 0;
        }
    }
    return 1;
}
unsigned int getPrime(unsigned int n){
    unsigned int x = 2;
    int count = 1;
    while(1){
        if (checkPrime(x)){
            if (count == n){
              return x;
            }
            else{
                count++;
            }
        }
        x++;
    }
}
