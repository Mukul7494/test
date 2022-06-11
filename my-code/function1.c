#include<stdio.h>
int addnumbers()
{int a, b,result;
result =a+b;
return result;
}
int main()
{int n1,n2,sum,result;
printf("enter the two numbers: ");
scanf("%d%d",&n1,&n2);
sum = addnumbers(n1,n2);
printf("Sum = %d ",result);

return 0;
}