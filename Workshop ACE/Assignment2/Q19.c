#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,num3,sum=0;
    printf("Enter the number of terms :");
    scanf("%d",&num1);
    for (num2=1;num2<=num1;num2++)
    {num3=pow(10,num2)-1;
    printf("%d ",num3);
    sum=num3+sum;
    }
    printf("\nThe sum of the series is : %d ",sum);
}