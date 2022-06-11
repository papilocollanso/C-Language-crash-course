#include<stdio.h>
#include <stdbool.h>
  
int main(void){
    bool isTrue = false;
    int a = 10;
    double b =10.5;
    printf("%lu\n",sizeof(b)); //8 bytes =64 bits
    float c =10.5;
    printf("%lu\n",sizeof(b)); //4 bytes =32 bits
    char d = 'a';
    char e[] = "char array"; //aka string
    //int zero =.99999999999;
    //printf("zero is %d\n",zero);

    int slices =17;
    int people =2;
    double slicesPerPerson = slices/people; //8
    printf("%lf\n", slicesPerPerson); //lf for double
    double test1 = 25/ 2*2; //24.0
    double test2 =25/2 *2.0; //24.0
    
    double test3=25.0/2*2; //25
    double test = (double) 25/2*2.0;//25
    printf("test1: %lf",test1);
    printf("test2: %lf",test2);
    printf("test3: %lf",test3);
    printf("test4: %lf",test2);
    return 0;
}