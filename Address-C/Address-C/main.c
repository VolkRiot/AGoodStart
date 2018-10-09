//
//  main.c
//  Address-C
//
//  Created by Mikhail Metrikin on 10/8/18.
//  Copyright © 2018 Mikhail Metrikin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    printf("i store its values at %p\n", &i);
    printf("This function starts at %p\n", &main);
    return 0;
}
