// The Number is palindrome or not
#include <stdio.h>
int main()
{
    int num1, rem, rev = 0, actualnumber = num1;
    printf("Enter the number : ");
    scanf("%d", &num1);
    actualnumber = num1;
    while (num1 > 0)
    {
        rem = num1 % 10;
        rev = rem + (rev * 10);
        num1 = num1 / 10;
    }
    if (rev == actualnumber)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not a palindrome number");
    }
}