//
//  main.m
//  Counting Down
//
//  Created by Mikhail Metrikin on 9/4/18.
//  Copyright © 2018 Mikhail Metrikin. All rights reserved.
//

#import <Foundation/Foundation.h>

void countDown()
{
    int count = 99;
    do {
        if (count % 5 == 0) {
            printf("Found one!\n");
        } else {
            printf("%d\n", count);
        }
        count = count - 3;
    } while (count > 0);
    
}

int main(int argc, const char * argv[]) {
    countDown();
    return 0;
}
