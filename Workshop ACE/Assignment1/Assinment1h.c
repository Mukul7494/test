#include<stdio.h>
#include<math.h>
int main()
{
    int x,x1,x2,y,y1,y2;
    float distance;
    printf("Enter X1\n");
    scanf("%d",&x1);
    printf("X1 is = %d\n",x1);
    printf("Enter X2\n");
    scanf("%d",&x2);
    printf("X2 is = %d\n",x2);
     x=x2-x1;
    printf("Enter Y1\n");
    scanf("%d",&y1);
    printf("Y1 is = %d\n",y1);
    printf("Enter Y2\n");
    scanf("%d",&y2);
    printf("Y2 is = %d\n",y2);
    y=y2-y1;
    distance = sqrt((float)x*x+y*y);
    printf("Distance between the said points is = %.4f",distance);
    return 0;
}