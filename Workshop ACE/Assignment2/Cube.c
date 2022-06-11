#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,cube;
     printf("Enter the number of terms\n");
     scanf("%d",&num2);
    for(num1=1;num1<=num2;num1++)
    {
     cube=pow(num1,3);
     printf("Number is : %d  and the Cube of the number %d is : %d \n",num1,num1,cube);
    }
     return 0;
}