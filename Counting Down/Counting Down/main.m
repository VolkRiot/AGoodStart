//
//  main.m
//  Counting Down
//
//  Created by Mikhail Metrikin on 9/4/18.
//  Copyright © 2018 Mikhail Metrikin. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <readline/readline.h>
#import <stdio.h>
#import <stdlib.h>

void countDown(int count)
{
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
    printf("Where should i start counting?\n");
    char *input = readline(NULL);
    int count = atoi(input);
    
    countDown(count);
    return 0;
}
