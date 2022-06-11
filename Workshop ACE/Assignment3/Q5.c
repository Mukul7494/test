#include <stdio.h>
int main()
{
    int num1 = 1, num2 = 100, odd;
    while (num1 <= num2 / 2)
    {
        odd = (2 * num1) - 1;
        num1++;
        printf("%d ", odd);
    }
}