// To calculate frequency of a number
#include <stdio.h>
int main()
{
    int num1, rev = 0;
    int zero = 0, on = 0, tw = 0, thre = 0, fr = 0, fiv = 0, six = 0, sev = 0, eig = 0, nin = 0;
    printf("Enter the number : ");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        rev = (num1 % 10) + (rev * 10);
        num1 = num1 / 10;
    }
    while (rev != 0)
    {