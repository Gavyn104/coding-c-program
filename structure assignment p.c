// STRUCTURE
#include <stdio.h>
#include <string.h>
struct Book{
	char title[30];
	char author[30];
	char ISBN[13];
	int publication_year;
	float price;
}book1,book2;
int main (){
	//strcpy(book1.title,"introduction to c programming");
	
	printf("enter title:");
	scanf("%s",&book1.title);
	
	//strcpy(book1.author,"john smith");
	
	printf("enter author:");
	scanf("%s",&book1.author);
	
	//strcpy(book1.ISBN,"9780131103627");
	
	printf("enter ISBN:");
	scanf("%s",&book1.ISBN);
	
	//book1.publication_year=2022;
	
	printf("enter publication year:");
	scanf("%d",&book1.publication_year);
	
	//book1.price=49.99;
	
	printf("enter price:");
	scanf("%f",&book1.price);
	
	printf("title:%s\n",book1.title);
	printf("author: %s\n",book1.author);
	printf("ISBN: %s\n",book1.ISBN);
	printf("publication_year: %d\n",book1.publication_year);
	printf("price:%.2f\n",book1.price);
	
	
	
	return 0;
	
}