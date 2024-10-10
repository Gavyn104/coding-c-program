#include <stdio.h>
#include <conio.h>
int main(){
  int customerID,d;
  char name[]={} ;
  float unitconsumed,u;
  float chargeperunit,p;
  float bill,b;
  float subcharge,c;
  float totalamount,a;
  
  printf("Enter customer ID:");
  scanf("%d",&d);
  
  printf("Enter your name:");
  scanf("%s",&name);
  
  printf("Enter unit consumed:");
  scanf("%f",&u);
  
  if(u<=199){
  printf("charge per unit is 1.20",p=1.20);}
  
  else if(u>=200 && u<=400){
  printf("charge per unit is 1.50",p=1.50);}
  
  else if(u>400 && u<=600){
  printf("charge per unit is 1.80",p=1.80);}
  
  else{
  printf("charge per unit is 2.00",p=2.00);}
  
  
    b=u*p;
    printf("total bill is %f\n",b);
    
    if(b>=400 ){
    c=b*15/100;
    printf("subcharge%f\n",c);
    }
    
     if(b<100){
    b=0;
    printf("bill is invalid\n",b);
    
    }


  a=b+c;
  printf("total amount is %f\n",a);













return 0;
}