#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void){
     printf("what is your name?");
     char name[20]; //\0
     scanf("%19s", name);

     int letter = 0;
     while(name[letter] !='\0')
     {
        letter++;
     }

     printf("Size of name is %d\n", letter);
     
     printf("Size of name is %lu\n", strlen(name));
    //string compare
     if(strcmp(name, "caleb")==0)
     {
        printf("You get access!\n");
     }
//string copy
     char copy[20];
     strcpy(copy, name);
     printf("%s ", copy);

     //string concatenation
    char lastName[] = "Curry";
    strcat(copy, lastName);
    printf("string concat %s\n  ", copy);

    return 0;
}