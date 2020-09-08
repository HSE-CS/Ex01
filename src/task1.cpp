//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 08.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task1.h"
#define max 20000

// ****
// Решето Эратосфена
// ****

unsigned int getPrime(int target_number){
    unsigned int prime_number = 0;
    int counter = 0;
    
    //заполняем единицами
    int S[max];
    for (int i = 0; i < max; i++){
        S[i] = 1;
    }
    
    S[0] = 0;
    S[1] = 0;

    for(int k=2; k*k<= max; k++){
        // если k - простое (не вычеркнуто)
        if(S[k]==1){
            // то вычеркнем кратные k
            for(int l=k*k; l<=max; l+=k){
                S[l]=0;
            }
        }
    }
    
    // ищем в массиве натуральных чисел наше (порядвковое)
    for(unsigned int i = 1; i < max; i++){
        if (S[i] == 1){
            counter++;
        }
        if (counter == target_number){
            prime_number = i;
            return prime_number;
        }
    }
    
    return prime_number;
}
