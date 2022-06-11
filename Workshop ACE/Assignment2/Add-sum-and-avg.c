#include <stdio.h>
int main()
{
    int num, sum, avg;
    printf("Enter 10 numbers \n");
    for (int i = 1; i <= 10; ++i)
    {
        scanf("%d", &num);
        printf("Number %d is : %d \n", i, num);
        sum = sum + num;
    }
    printf("Sum is : %d\n", sum);
    avg = sum / 10;
    printf("Average is : %d ", avg);
    return 0;
}