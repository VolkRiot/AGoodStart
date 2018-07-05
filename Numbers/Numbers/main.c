//
//  main.c
//  Numbers
//
//  Created by Mikhail Metrikin on 7/4/18.
//  Copyright © 2018 Mikhail Metrikin. All rights reserved.
//

#include <stdio.h>

void multiply()
{
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
}

int main(int argc, const char * argv[]) {
    unsigned long x = 255;
    
    printf("x is %lu. \n", x);
    
    // No need to adapt these for unsigned.
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal x is %lx. \n", x);
    
    // Casting and int division
    printf("11 / 3.0 = %f\n", 11 / (float)3);
    
    multiply();
    
    return 0;
}
