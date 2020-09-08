//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 08.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

int main(){
    int num;
    printf("Type a prime number index: ");
    scanf("%d", &num);
    int r = getPrime(num);
    printf("Your prime number: %d\n", r);
    
}
