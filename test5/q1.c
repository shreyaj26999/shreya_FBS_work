//WAP to calculate selling price of book based on cost price and discount.(using function and nested if else).

#include<stdio.h>
float findsellingprice(float cp,float dis);
void main()
{
	float costprice,dis,sellingprice;
	printf("Enter the cost price: ");
	scanf("%f",&costprice);
	printf("Enter the discount: ");
	scanf("%f",&dis);
	
	sellingprice = findsellingprice(costprice,dis);
	printf("Selling price = %f",sellingprice);
}
float findsellingprice(float cp,float dis)
{
	float mp,sp;
	mp = cp;
	
	if(dis >= 0)
	{
		if(dis < 100)
		{
			sp = mp - (mp * dis/100);
		}
		else
		{
			sp = 0;
		}
	}
	else
	{
		sp = mp;
	}
	return sp;
}