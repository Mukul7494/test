#include <stdio.h>
int main()
{
    int num1, num2, product;
    printf("Enter two numbers whose Product you want \n");
    scanf("%d%d", &num1,&num2);
    printf("You have Entered %d as your first number and %d as your second number\n", num1, num2);
    product = num1 * num2;
    printf("Your product is = %d", product);
    return 0;
}