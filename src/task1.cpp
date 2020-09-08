#include"task1.h"
#include<iostream>
#include<vector>

using namespase std;

unsigned int getPrime(int n)
{
    int l = 1, m = 2, i=2;
    vector<int>numbers(100000);
    for(int j = 0;j<100000;j++){
        numbers[j] = 0;
    }
    if (n == 1)
        return 2;
    while(1){
        if(i == 100000){
            return 0;
        }
        if(numbers[i] == 0){
            for(int j = i;j<100000;j = j+i){
                numbers[j] = 1;
            }
            l++;
            m = i;
        }
        if(l == n){
            return m;
        }
        i++;
    }
}


	
