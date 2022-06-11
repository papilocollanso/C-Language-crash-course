#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include  "libraris.h"

// int square(int input)
// {
//     return input * input;
// };

// int cube (int input)
// {
//     int x = input * input * input;
//     return x;
// };


int main(void){

    // int x = 5;
    // int xSquared = square(x);
    // printf("%d\n", xSquared);
    // int xTo5 = power(x,5);
    // printf("%d\n", xTo5);
    int recursive = recursivePower(5,5);
    printf("%d\n", recursive);
    int x = 5;
    changeVal(&x);
    int size =7;
    int ages[] ={1,4,53,23,23,9,52};
    printf("%d\n", oldestValue(ages,size));
    printf("%d\n",x);
    return 0;
};