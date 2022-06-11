#include <stdio.h>
int main()
{
    int num1, reminder, reverse = 0, sum;
    printf("Enter the number to reverse : ");
    scanf("%d", &num1);
    while (num1 > 0)
    {
        reminder = num1 % 10;                                                 
        reverse = reminder + (10 * reverse);  

        num1 = num1 / 10;
    }
    printf("The Number in Reverse order is : %d ", reverse);
}