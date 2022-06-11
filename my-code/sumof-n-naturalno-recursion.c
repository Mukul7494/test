#include <stdio.h>
int sum(int n);
int main()
{
    printf("sum of natural number is : %d ", sum(5));
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNM1 = sum(n - 1);
    int sum_upto_n = sumNM1 + n;
}