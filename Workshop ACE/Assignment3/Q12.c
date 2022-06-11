#include <Stdio.h>
int main()
{

    long long num1, temp;
    int first, last;
    printf("Enter the number : \n");
    scanf("%lli", &num1);
    last = num1 % 10;
    while (num1 > 10)
    {
        num1 /= 10;
        first = num1;
    }
    printf("\nfirst digit is : %d ", first);
    printf("\nThe last digit is : %d ", last);
    printf("\nThe sum of first and last : %d ", first + last);
}