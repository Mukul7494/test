#include<stdio.h>
int main()
{int low,high,i,flag;
printf("enter two numbers\n");
scanf("%d%d",&low,&high);
printf("prime number between %d and %d are\t ",low ,high);
while(low<high){
    flag = 0;
if (low<=1){
    ++low;
    continue;
}   
for(i=2;i<=low/2; ++i){
    if(low%i==0){
        flag=1;
        break;
    }
} 
if(flag==0)
printf("%d\t" ,low);
++low;
}
return 0;
}