/*
Largest palindrome product
Problem 4 

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ispalindrome(unsigned long number){
    char string[32];
    memset(string, 0, 32);

    sprintf(string, "%lu", number);
    //printf("%s\n", string);

    int len = strlen(string);

    if(len <= 0)
        return 0;
    
    int i = 0;
    int ilen = (len-1);

    char palindrome = 1;

    while(1){
        if(string[i] != string[ilen]){
            palindrome = 0;
            break;
        }

        if(len % 2 == 0) {
            if(i+1 == ilen)
                break;
        } else if(i == ilen)
            break;

        i++;
        ilen = (len-1) - i;
    }

    return palindrome;

}


int main(int argc, char** argv) {
    
    int num = 0;

    for(int i = 999; i>0;i--)
        for(int j = 999; j>0;j--){
            int num_ = i * j;
            if(ispalindrome(num_) && (num_ > num))
                num = num_;
        }
    

    printf("Biggest palindrome is : %d\n",num);

    return (EXIT_SUCCESS);
}

