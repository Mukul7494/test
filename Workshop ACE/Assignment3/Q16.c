// write number in reverse order
#include <stdio.h>
int main()
{
    int num1, rem, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num1);
    while (num1 > 0)
    {
        rem = num1 % 10;
        rev = rem + (rev * 10);
        num1 = num1 / 10;
    }
    printf("%d ", rev);
}