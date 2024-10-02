//program to clarify bank loan
/* author:Moses
date 23/1/2024
*/

#include <stdio.h>
#include <conio.h>
 int main () {
   int age,a;
   float annualincome,i;
   
   
   printf("enter age:");
   scanf("%d" ,&a);
   
   printf("enter annualincome,i\n");
   scanf("%f", &i);
   
   if(age>=21 && annualincome>=21000){
   printf("congratulations you clarify for a loan");}
   
   else{
   printf("unfortunately we are unable to offer you a loan at the time");}
   
   
   
   
   return 0;
   }