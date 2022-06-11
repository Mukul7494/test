#include<stdio.h>
int main()
{
    int item1,item2,weight1,weight2;
    float average;
    printf("Enter number of item 1 = ");
    scanf("%d",&item1);
    printf("Number of item 1 is =%d\n",item1);
    printf("Enter weight of item 1 = ");
    scanf("%d",&weight1);
    printf("Weight of item 1 is = %d\n",weight1);
    printf("Enter number of item 2 = ");
    scanf("%d",&item2);
    printf("Number of item 2 is = %d\n",item2);
    printf("Enter weight of item 2 = ");
    scanf("%d",&weight2);
    printf("Weight of item 2 is = %d\n",weight2);
    average=((float)item1*weight1+item2*weight2)/(item1+item2);
    printf("Average of two item is = %f ",average);
    return 0;

}