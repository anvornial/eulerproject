/*
Summation of primes
Problem 10 

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.

FAST version using Sieve of Eratosthenes
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * prime_sieve(unsigned long n){
    // prime is POSITIVE number divisible by 1 AND itself
    // implemented using Sieve of Eratosthenes
    // https://www.geeksforgeeks.org/sieve-of-eratosthenes/

    // allocate array of char to num size
    char *num = malloc(sizeof(char)*(n+1));

    memset(num, 1, n);

    // 0.1 and (assume) n+1 (c language is 0 indexed array) is not prime
    num[0] = 0;
    num[1] = 0;
    num[n] = 0;

    for(int i=2; i*i<=n; i++){
        for(int j=i*2; j<=n; j=j+i){
            num[j] = 0;
        }
    }

    return num;
}

int main(int argc, char** argv) {
    unsigned long long sum = 0;

    char *prime = prime_sieve(2000000);

    for(unsigned long long i = 1; i<2000000; i++){
        if(prime[i] == 1){
            //printf("%d ", i);
            sum = sum + i;
        }
            
    }

    printf("Sum is : %lu\n",sum);

    return (EXIT_SUCCESS);
}

