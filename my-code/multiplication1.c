#include<stdio.h>
int main ()
{int i,j,c;

 printf("enter the number whose table you want\n");
 scanf("%d",&i);
 printf("you want the table of %d \n",i);
 for(j=1;j<=10;++j)
 {
 c=i*j;
     printf("\n %d x %d = %d ",i,j,c);
}
 return 0;
}
    
 
