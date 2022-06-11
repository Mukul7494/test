// swaping of first and last digits
#include <stdio.h>
#include <math.h>
int main()
{
    int num1, digits, first, last, swaped;
    printf("Enter the Number : ");
    scanf("%d", &num1);                // 12345
    last = num1 % 10;                  // 12345%10------->5
    digits = log10(num1);              // log10(12345)----->4.0914 it is int type so it gives 4 only
    first = num1 / pow(10, digits);    // 12345/10000---->it gives first digit of the number
    swaped = last;                     //----->12345
    swaped = swaped * pow(10, digits); //------>50000
    // 12345%10000=2345
    swaped = swaped + (num1 % (int)pow(10, digits)); //------->50000+2345=52345
    swaped = swaped - last;                          // 52345-5=52340
    swaped = swaped + first;                         // 52341
    printf("Number After Swaping first and last digits is : %d", swaped);
}
