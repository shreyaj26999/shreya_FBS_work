/*1. Create a structure Book with data members as bname, id, author, price. Accept the
values of all these members from user and display them.*/

#include<stdio.h>
#include<string.h>

typedef struct Book{
	char bname[30];
	int id;
	char author[50];
	int price;
} Book;

Book StoreData();
void Displaydata(Book temp);

void main()
{
	Book b1,b2;
	
	b1 = StoreData();
	Displaydata(b1);
	
	b2 = StoreData();
	Displaydata(b2);
}
Book StoreData()
{
	Book temp;
	
	printf("Enter the book name: ");
	scanf("%s",temp.bname);
	
	printf("Enter book id: ");
	scanf("%d",&temp.id);
	
	printf("Enter Author name: ");
	scanf("%s",temp.author);
	
	printf("Enter price of the book: ");
	scanf("%d",&temp.price);
	
	return temp;	
}
void Displaydata(Book temp)
{
	printf("\nBook Details:\n");
	printf("Name of the book= %s\n",temp.bname);
	printf("Book ID = %d\n",temp.id);
	printf("Author of book = %s\n",temp.author);
	printf("Price of Book = %d\n",temp.price);
}