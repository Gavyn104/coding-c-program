// C arrays-2D arrays
#include<stdio.h>
int main () {
   int i;
   int j;
   int k;
  int marks[2] [2][3] ={{{12,13,14},{80,90,50}},{{12,13,14},{80,90,50}}};
   
   for(i=0;i<2;i++){
     for(j=0;j<2;j++){
       for(k=0;k<3;k++){
   printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
   
   }
   }
   }
   
   






  return 0;
  }