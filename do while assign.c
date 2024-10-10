//for loop-output do while enter
#include<stdio.h>
int main () {
  int start,a;
  int stop,t;
  int sum=a;
  printf("enter a value to start:");
  scanf("%d",&start);
  
  printf("enter a value to stop:");
  scanf("%d",&t);
  
  do{
  printf("%d\n",a);
   sum +=a;
  a++;
  
  }while(a<=t);
  
   printf("the sum is %d",sum);
   
   






  return 0;
}