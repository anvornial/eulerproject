/*
Smallest multiple
Problem 5 

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int curnum = 0;
    char found = 0;

    do {
        found=1;
        curnum++;
        for(int i = 1; i<=20;i++){
            if((curnum % i) > 0){
                found=0;
                break;
            }
        }
    } while(!found);

    printf("Smallest divisible number is : %i\n",curnum);

    return (EXIT_SUCCESS);
}

