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
    printf("Type a number: \n");
    scanf("%d", &num);
    int r = getPrime(num);
    printf("%d", r);
    
}
