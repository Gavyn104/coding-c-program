// program to find simple interest 
/*
program to find the simple interest 
Date :22/9/2024
*/
#include <stdio.h>
 int main () {
      float principle ,p;
      float rate ,r;
      float time ,t ;
      float interest ,i;
      interest=p*r/100*t;
      
      
      printf("Enter principle,p\n");
      printf("Enter rate ,r\n");
      printf("Enter time ,t\n");
      
      scanf("%f %f %f",&p,&r,&t);
      
      printf("simple interest is %.1f,%.1f,%.1f=%.2f",p,r,t,(p*r/100*t));
      
 
 
 
 
 
 
 
  return 0;
 }