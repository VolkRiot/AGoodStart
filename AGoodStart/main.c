//
//  main.c
//  AGoodStart
//
//  Created by Mikhail Metrikin on 4/7/18.
//  Copyright © 2018 Mikhail Metrikin. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

float remainingAngle(float angle1, float angle2)
{
    float totalAngles = 180.0;
    return totalAngles - angle1 - angle2;
}

void congratsStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s programming as i can fit into %d days.\n", student, course, numDays);
}

float farenheightFromCelcius(float cel)
{
    float far = cel * 1.8 + 32.0;
    printf("%f celcius is %f farenheit", cel, far);
    return far;
}

void squared(int first)
{
    int squared = first * first;
//    char *string;
    
    printf("\"%d\" squared is \"%d\"\n", first, squared);
    
}

void do_while_loop()
{
    int i = 0;
    do {
        printf("%d. Misha is Cool\n", i);
        i++;
    } while (i < 12);
}

int main(int argc, const char * argv[]) {
//    congratsStudent("Mik", "Python", 5);
//    sleep(2);
//    congratsStudent("Mik", "Python", 5);
    
    squared(5);
    do_while_loop();
    
    
    
    return EXIT_SUCCESS;
}


