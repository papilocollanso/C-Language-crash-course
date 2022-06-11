#include <stdio.h>
#include <stdbool.h>

int main(void){

    int size =10;
    int ages[] = {12,43,545,3,4,54,6,7,87,12};
    int calsize = sizeof(ages)/sizeof(ages[0]);
    // for(int i=0; i<calsize;i++){
    //     printf("ages[i] = %d\n", ages[i]);
    // }
    for (int i=0; i<10; i++){
        for(int j = i; j>=0; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}