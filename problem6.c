/*
Sum square difference
Problem 6 

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

https://projecteuler.net/problem=6
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    unsigned long long sumsqr = 0;
    unsigned long long sqrsum = 0;
    unsigned long long diff = 0;

    for(int i = 1; i<=100;i++){
        sumsqr = sumsqr + (i*i);
        sqrsum = sqrsum + i;
    }
    sqrsum = sqrsum*sqrsum;

    printf("Sum of squares  : %lu\n",sumsqr);
    printf("Square of sum : %lu\n",sqrsum);

    diff = sqrsum - sumsqr;

    printf("Sum square difference : %lu\n",diff);

    return (EXIT_SUCCESS);
}

