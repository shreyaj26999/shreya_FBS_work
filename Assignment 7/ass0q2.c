//Area of circle
void area(float *);
void main(){
	float rad;
	printf("Enter the radius of circle: ");
	scanf("%f",&rad);
	area(&rad);
}
void area(float *x)
{
	float area = 3.14 * *x * *x;
	printf("The area of circle is : %f",area);
}