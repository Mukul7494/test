#include<stdio.h>
int main()
{
  int mark[10],i,n,sum=0;
  float average;
  printf("enter number of students : ");
  scanf("%d",&n);
  for(i=0;i<n;++i){
      printf("enter number %d =",i+1);
      scanf("%d",& mark[i]);
      sum += mark[i];

  }  
  average = (float) sum/n;
  printf("average = %.2lf",average);
  return 0;

}