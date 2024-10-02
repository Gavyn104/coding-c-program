//program to clarify bank loan
/* author:Moses
date 23/1/2024
*/

#include <stdio.h>
#include <conio.h>
 int main () {
   float bookID,d;
   float Duedate,s;
   float returndate,z;
   float finerate,r;
   float fineamount,a;
   float daysoverdue,f;
   
   f=z-s;
    printf("enter book ID,d\n");
    scanf("%f",&d);
    
    printf("enter duedate ,s\n");
    scanf("%f",&s);
    
    printf("return date ,z\n");
    scanf("%f",&z);
    
    
    
    f=z-s;
    printf("The overdue date %.2f\n",f);
    
    
   if( f<=7){
    printf("the fine rate = 20\n",r=20);}
    
    else if(f>7 &&f<=15){
    printf("the fine rate= 50\n",r=50);}
    
    
    else {
    printf("the fine rate is 100\n",r=100); }
    
    a=r*f;
    printf("the fine amount%f\n",a);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    }