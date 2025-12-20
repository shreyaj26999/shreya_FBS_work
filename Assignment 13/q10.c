//Product(id,name,quality,price)

#include<stdio.h>
#include<string.h>
struct Product{
	int id;
	char name[50];
	char quality[30];
	float price;
};

void main()
{
	struct Product p1;
	
	printf("Enter the product id: ");
	scanf("%d",&p1.id);
	
	char temp[50];
	printf("Enter the product name: ");
	scanf("%s",temp);
	strcpy(p1.name,temp);
	
	char temp2[30];
	printf("Enter quality of product: ");
	scanf("%s",temp2);
	strcpy(p1.quality,temp2);
	
	printf("Enter the price: ");
	scanf("%f",&p1.price);
	
	printf("\nPRODUCT:\n");
	printf("Product ID = %d\n",p1.id);
	printf("Product's Name = %s\n",p1.name);
	printf("Product's Quality = %s\n",p1.quality);
	printf("Product's price = %f\n",p1.price);
}