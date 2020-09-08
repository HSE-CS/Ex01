//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 08.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task1.h"
#define max 50000

// ****
// Решето Эратосфена
// ****
// порядковое число до 5000-го
// ****

unsigned int getPrime(unsigned int target_number){
    int counter = 0;
    
    //заполняем единицами
    int num_array[max];
    for (int i = 0; i < max; i++){
        num_array[i] = 1;
    }
    
    num_array[0] = 0;
    num_array[1] = 0;

    for(int k=2; k*k< max; k++){
        // если k - простое (не вычеркнуто)
        if(num_array[k]==1){
            // то вычеркнем кратные k
            for(int l=k*k; l < max; l+=k)
                num_array[l]=0;
        }
    }
    
    // ищем в массиве натуральных чисел наше (порядковое)
    for(unsigned int i = 1; i < max; i++){
        if (num_array[i] == 1)
            counter++;
        
        if (counter == target_number)
            return i;
    }
    
    return 0;
}
