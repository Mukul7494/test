#include <Stdio.h>
int main()
{

    long long num1, temp;
    printf("Enter the number : \n");
    scanf("%lli", &num1);
    temp = num1;
    while (num1 > 10)
    {
        num1 /= 10;
    }
    printf("\nfirst digit is : %d ", num1);
    printf("\nThe last digit is : %d ", temp % 10);
}