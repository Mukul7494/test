#include <stdio.h>
int main()
{
    int num1 = 1, num2 = 100, even;
    while (num1 <= num2 / 2)
    {
        even = 2 * num1;
        num1++;
        printf("%d ", even);
    }
}