/*
Multiples of 3 and 5
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int sum=0;
    int i=1;
    
    for(i=1;i<1000;i++){
        if((i%3==0)||(i%5==0)) sum+=i;
    }
    
    printf("Sum is : %d\n",sum);

    return (EXIT_SUCCESS);
}

