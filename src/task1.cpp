#include "task1.h"

bool isSimple(int num){
    for (int i = 2; i < num; ++i)
        if ((num % i) == 0)
            return false;
    return true;
}

unsigned int getPrime(int n){
    int nums[100];
    int counter = 1;
    int a = 3;
    nums[0] = 2;
    for (int i = 1; i < n; ++i) {
        nums[i] = 0;
    }
    while (nums[n-1] != 0){
        if (isSimple(a)){
            nums[counter] = a;
            counter++;
        }
        a++;
    }
    for (int i = 0; i < n; ++i) {
        cout << nums[i];
    }
    return nums[n-1];
}