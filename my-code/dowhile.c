#include<stdio.h>
int main()
{ int i=1;
double number,sum=0.0;
for(i=1;i<=10;++i){
    printf("enter a n%d ",i);
    scanf("%lf",&number);
    if(number<0.0){
     break;      }
sum +=number;
}
printf("sum = %.2lf",sum);
 return 0;
}
