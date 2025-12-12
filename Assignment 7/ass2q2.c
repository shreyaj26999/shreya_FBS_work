//Accept three sides of triangle from the user and determine whether the triangle is equilateral,isocseles or scalane
void triangle(int *,int *,int *);
void main()
{
	int side1,side2,side3;
	printf("Enter the side: ");
	scanf("%d",&side1);
	printf("Enter the second side: ");
	scanf("%d",&side2);
	printf("Enter the third side: ");
	scanf("%d",&side3);
	triangle(&side1,&side2,&side3);
}
void triangle(int *a,int *b,int *c) {

    // Check if the sides form a valid triangle
    if (*a + *b > *c && *a + *c > *b && *b + *c > *a) {

        if (*a == *b && *b == *c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (*a == *b || *b == *c || *a == *c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
