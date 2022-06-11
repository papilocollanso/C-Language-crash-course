#include <stdio.h>
#include <stdbool.h>

int main(void){
   int age = 170;
//    if(age < 150){
//      printf("you might be alive\n");
//    }
//    else{
//     printf("you might not be alive\n");
//    }

//     return 0;
// int number = 2;
// switch(number){
//   case 0:
//   printf("case 0");
//   break;
//   case 1:
//   printf("case 1");
//   break;
//   default:
//   printf("nothin");
// }
double balance = -5000;
balance > 0 ? printf("you has money") : printf("No money yo\n");


bool hasMoney;
hasMoney = balance > 0 ? 1: 0;
printf("Has money? 1 yes 0 is no: %d\n",hasMoney);


}



//switch statement