#include <stdio.h>
int main()
{
    int num1, num2, sum=0, even;
    printf("Enter the Number of Even terms ");
    scanf("%d", &num1);
    printf("The Even Number are : ");
    for (num2 = 1; num2 <= num1; num2++)
    {
        even = num2 * 2;
        printf("%d ", even);
        sum=even+sum;
    }
    printf("\nSum of Even Natural Number upto %d  is : %d ",num1,sum);
}