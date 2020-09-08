#include"task1.h"
#include<iostream>

unsigned int getPrime(int n)
{
    int k = 1;
    for (int i = 0, now = 0; i<n; now ++){
        for (int j = 2; j <= sqrt(now); j++)
        if(now%j!=0 && now!=1){
            i++;
            k = now;
        }         
    }
    return k;
}


	
