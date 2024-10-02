// program to find compound interest 
/*
program to find the compound interest 
Author: Moses Kinyoro 
Date :22/9/2024
*/
#include <stdio.h>
 #include<math.h>
 int main (){
   float principle,p;
   float rate,r;
   float compoundyears,n;
   float time,t;
   float amount,a;
   float compoundinterest,CI;
   
     printf("enter principle,p\n");
     scanf("%f",&p);
     
     printf("enter rate,r\n");
     scanf("%f",&r);
     r=r/100;
     
     printf("enter compound year,n\n");
     scanf("%f",&n);
     
     printf("enter time,t\n");
     scanf("%f",&t);
     
     a=p*pow((1+r/n),n*t);
     CI=a-p;
     
     
     printf("\ncompound interest= %.2f\n",CI);
     
 
 
 
 
 
 
 
 
 
 
 
 
     return 0;
 }