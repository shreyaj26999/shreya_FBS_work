//Check if the number is armstrong no or not.

void main()
{
	int n = 153;
    int temp = n, sum = 0;

    while(temp > 0) {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;  
        temp = temp / 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

}