//
//  main.c
//  Priorityqueue
//
//  Created by xinye lei on 15/10/8.
//  Copyright © 2015年 xinye lei. All rights reserved.
//

#include <stdio.h>
#include "PriorityQueue.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

double urand(void) {
    double x;
    while ((x = (rand() / (double) RAND_MAX)) >= 1.0);		// loop until x < 1 to exclude 1.0
    return x;
}

/*
 * Generate a random number from an exponential distribution
 * with a given mean.
 *
 * @param mean the mean of the distribution
 * @return a number draw from exponential distribution
 */
double randexp(double mean) {
    return (-1 * mean) * (log(1.0 - urand()));
}

int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    PQueue pq = pq_create();
    double a[10];
    for (int i = 0; i < 10; i++) {
        double number = rand() / (double)RAND_MAX;
        a[i] = number;
        pq_push(pq, number, a+i);
    }
    for (int i = 0; i < 10; i++) {
        double a = *(double*)pq_pop(pq);
        printf("%f\n", a);
    }
}
