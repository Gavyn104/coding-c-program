//for loop-output  while enter
#include<stdio.h>
int main () {
  int start,a;
  int stop,t;
  int sum=a;
  printf("enter a value to start:");
  scanf("%d",&start);
  
  printf("enter a value to stop:");
  scanf("%d",&t);
  
  while(a<=t){
  printf("%d\n",a);
  
  sum+=a;
  a++;
  
  }
   printf("the sum is %d",sum);
   






  return 0;
}