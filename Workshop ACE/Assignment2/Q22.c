#include<stdio.h>
int main()
{
    int num1,j,k=0,l=1,m;
    printf("Enter the Number of terms to display fibonacci series ");
    scanf("%d",&num1);
        printf("The fibonacci series is : ");
    for(j=0;j<num1;j++)
    {
        printf("%d ",k);
        m=k+l;
        k=l;
        l=m;


    }

}