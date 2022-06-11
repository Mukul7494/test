// multiplication of all the digits
#include <stdio.h>
int main()
{
    int num1, multi = 1, modulus;
    printf("Enter the Number ");
    scanf("%d", &num1);
    while (num1 > 0)
    {
        modulus = num1 % 10;
        multi *= modulus;
        num1 = num1 / 10;
    }
    printf("\nThe the Multiplication of all The digits is : %d ", multi);
}