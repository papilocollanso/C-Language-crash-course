
#include <stdio.h>
int main(void){
  printf("give me a radius: ");
  int radius;
  scanf("%d", &radius); //address-of-operator (pointer )
  printf("You chose the value %d\n", radius);

  char name[20]; // char array of 20 characters. '0' takes one spot
  scanf("%19s", name)
  printf("%s\n", name)
  return 0;
}