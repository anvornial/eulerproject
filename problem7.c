/*
10001st prime
Problem 7 

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?
 */

#include <stdio.h>
#include <stdlib.h>


char isprime(unsigned long num){
    // prime is POSITIVE number divisible by 1 AND itself
    // brute force time

    // 1 and 0 is NOT prime
    if(num < 2){
        return 0;
    }

    for(unsigned long i = num-1; i>1; i--){
        //printf("%d\n", i);
        if((num % i) == 0){
            return 0;
        }
    }

    return 1;
}

#define TARGET 10001

int main(int argc, char** argv) {
    unsigned long long i = 0;
    unsigned long long num = 0;
    
    while(i<=TARGET) {
        num++;
        if(isprime(num)){
            i++;
            if((i % 500) == 0)
                printf("%lu prime found\n", i);
        }
    }

    printf("The %d primes is : %lu\n",TARGET, num);

    return (EXIT_SUCCESS);
}

