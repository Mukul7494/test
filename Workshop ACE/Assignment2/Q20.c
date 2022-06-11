#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,square;
    int sum=0;
    printf("Enter the number of terms for square \n");
    scanf("%d",&num1);
    printf("The square upto %d natural number are : ",num1);
    for (num2=1;num2<=num1;num2++)
    {
        square=pow(num2,2);
        printf("%d ",square);
       sum=square+sum;
    }
    printf("\nThe sum of Square Natural Number upto %d is : %d " ,num1,sum);
}