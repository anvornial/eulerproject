/*
Special Pythagorean triplet
Problem 9 
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

https://projecteuler.net/problem=9
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    for(int a = 1; a<=1000;a++)
        for(int b = 1; b<=1000;b++)
            for(int c = 1; c<=1000;c++)
                if((a*a) + (b*b) == (c*c))
                    if(a + b + c == 1000) {
                        // wtf, cancer code
                        unsigned long prod = a*b*c;
                        printf("a:%d\n",a);
                        printf("b:%d\n",b);
                        printf("c:%d\n",c);
                        printf("abc : %lu\n",prod);
                        goto endloop;
                    }
    endloop:;

    return (EXIT_SUCCESS);
}