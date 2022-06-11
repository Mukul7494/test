// Addtion of all the digits in the number
#include <stdio.h>
int main()
{
    int num1, sum = 0, modulus;
    printf("Enter the Number ");
    scanf("%d", &num1);
    while (num1 > 0)
    {
        modulus = num1 % 10;
        sum += modulus;
        num1 = num1 / 10;
    }
    printf("\nThe sum of all The digits is : %d ", sum);
}