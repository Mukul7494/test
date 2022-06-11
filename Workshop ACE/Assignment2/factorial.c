#include<stdio.h>
int main()
{
    int num1,num2,fact=1;
    printf("Enter the no.(Factorial) ");
    scanf("%d",&num1);
    for(num2=1;num2<=num1;num2++)
    {
        fact=fact*num2;
    }
        printf("The Factorial of %d is : %d ",num1,fact);
}