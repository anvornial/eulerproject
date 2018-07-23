/*
Largest prime factor
Problem 3 

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>
#include <stdlib.h>


char isprime(unsigned long long num){
    // prime is POSITIVE number divisible by 1 AND itself
    // brute force time

    // 1 and 0 is NOT prime
    if(num < 2){
        return 0;
    }

    for(unsigned long long i = num-1; i>1; i--){
        //printf("%lu\n", i);
        if((num % i) == 0){
            return 0;
        }
    }

    return 1;
}

#define TARGET 600851475143UL

int main(int argc, char** argv) {
    unsigned long long num = 2;
    unsigned long long curnum = TARGET;
    char found = 0;
    
    while(1) {
        if((curnum % num) == 0){
            printf("%lu : divisible found\n", num);
            if(isprime(num)){
                printf("%lu : is prime\n", num);
                curnum = curnum / num;
                printf(" %lu : current number\n", curnum);
                if(num > found){
                    found = num;
                }
                if(curnum == 1){
                    break;
                }
            }
        } else 
            num++;
    }

    printf("largest prime factor of %lu is : %lu\n",TARGET, num);

    return (EXIT_SUCCESS);
}

