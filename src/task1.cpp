#include "task1.h"

bool isSimple(int num){
    for (int i = 2; i < num; ++i)
        if ((num % i) == 0)
            return false;
    return true;
}

unsigned int getPrime(int n){
    int conter = 1;
    int num = 1;
    while (conter != n+1){
        num++;
        //printf("counter: %d, num: %d, isSimple: %d\n", conter, num, isSimple(num));
        if (isSimple(num)){
            conter++;
        }
    }
    //printf("counter: %d, num: %d, isSimple: %d\n", conter, num, isSimple(num));
    return num;
}