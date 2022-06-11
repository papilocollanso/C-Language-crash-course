#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> // required for memory functions
//automatic, static and dynamic memory;
typedef struct 
{   
    char name[30];
    int age;
    bool isVerified;

}user;

user *createUser(char name[], int age, bool isVerified)
{
     user *newUser = malloc(sizeof(user));
     strcpy(newUser->name, name);
     newUser->age =age;
     newUser-> isVerified =isVerified;
     return newUser;

};
int main(void)

{
    
    int size;
    printf("How many int elements do you need bro?:");
    scanf("%d",&size); 
    int *arr = malloc(size * sizeof(int));
      if(arr == 0)
    {
        printf("Invalid pointer . Erro alocating memory\n");
        return -1;
    }
    else{
        printf("you good to go\n");
    }
    
    for(int i=0; i< size; i++)
    {
        scanf("%d",&arr[i]);
    };
    printf("your array:\n");
    for(int i=0; i<size; i++)
    {
 printf("arr[%d] =%d\n", i, arr[i]);
    };
  
    free(arr);
    //printf("your array:%d\n",sizeof(*arr));
    user *me = createUser("Caleb Curry", 72, false);
    printf(" caleb is %d  years old\n", me->age);
    free(me);
    // while(true)
    // {
    //     malloc(300000000);
    // }
    return 0;
}