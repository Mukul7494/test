#include<stdio.h>
int main()
{
    int row,coloumn,rowmax;
    printf("Enter max number of rows \n");
    scanf("%d",&rowmax);
    for(row=1;row<=rowmax;row++)
    {
    for(coloumn=1;coloumn<=row;coloumn++)
    {
        printf("*");
    }
       printf("\n");
   
    }
    
}