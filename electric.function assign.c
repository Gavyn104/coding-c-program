// function 
/*
author Moses 
*/
#include<stdio.h>
# include <conio.h>
float multipilaction(  float u,float p);
float amount (float b,float c);
float charge (float u);

int main (){
	
	int customerID,d;
	char name []={};
	float unitconsumed,u;
	float chargeperunit,p;
	float bill,b;
	float surcharge,c;
	float totalamount,a;
	
	printf("enter customer ID:");
	scanf("%d",&d);
	
	printf("enter you name:");
	scanf("%s",&name);
	
	printf("enter unit consumed:");
	scanf("%f",&u);
    
    p=charge (u);
    
    b=u*p;
    c=b*15/100;
    a=amount(b,c);
    
    
    printf("charge is %f\n",p);
    printf("bill is %f\n",b);
    printf("surcharge %f\n",c);
    printf("amount is %f\n",a);
    
    
    return 0;
    }
		
	float charge (float u){
    float p;
    if(u<200){p=1.20;}
    else if(u<400){p=1.50;}
    else if (u<600){p=1.80;}
    else{p=2.00;}
    
    return p;
    }
    
   float amount(float b ,float c) {
    
    float a;
      if(b<100){a=100;}
      else if(b<400){a=b;}
      else{a=b+c;}
      
      return a;
    
    }
					
	
	
	
    