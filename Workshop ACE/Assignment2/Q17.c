#include<stdio.h>
int main()
{
    int num1,num2;
    float harsum=0;
    printf("Enter the number of terms for Harmonic Series: ");
    scanf("%d",&num1);
    for(num2=1;num2<=num1;++num2)
    {
        printf("1/%d + ",num2);
        harsum=(1/(float)num2)+harsum;
    }
    printf("\nSum of series %d term is : %f",num1, harsum);
    return 0;
}