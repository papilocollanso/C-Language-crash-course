#include <stdio.h>

int main(void){

    printf("\n force precedence with ()\n");

    int xx = (2*3) + 3;
    int x = 2 * (3+3);
    int y = (2*3) +3;

    printf("x= %d\n", x);
    printf("y= %d\n", y);
    return 0;
}