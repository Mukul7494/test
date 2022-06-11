#include<stdio.h>
int main()
{ int num1,num2,sum;
    printf("Enter two numbers ");
   scanf("%d%d",&num1,&num2);
   printf("You have enterd %d as your first number \nyou have enterd. %d as your second number.",num1,num2);
   sum=num1+num2;
   printf("Your sum is = %d",sum);
   return 0;
}
