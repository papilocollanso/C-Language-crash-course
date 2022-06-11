#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int rows =3;
    int const columns = 4;
    int const size =12;
    int studentGrades[][12]={
        {1, 3, 4, 6},
        {3, 2, 4, 5},
        {32, 2, 4, 9}
    };
for(int i=0; i<rows; i++)
{
    for(int j =0; j<columns; j++)
    {
        printf("%d ", studentGrades[i][j]);
    }
    printf("\n");
}

    return 0;
}