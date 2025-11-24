/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/


void main() {
    float amount = 650;      // hardcoded purchase amount
    char student = 'y';      // hardcoded student status: 'y' or 'n'
	float discount = 0, finalAmount;

    if (student == 'y' || student == 'Y') {        // Student
        if (amount > 500)
            discount = amount * 0.20;              // 20% discount
        else
            discount = amount * 0.10;              // 10% discount
    }
    else if (student == 'n' || student == 'N') {   // Not a student
        if (amount > 600)
            discount = amount * 0.15;              // 15% discount
        else
            discount = 0;                           // No discount
    }

    finalAmount = amount - discount;

    printf("Purchase Amount: %.2f\n", amount);
    printf("Student: %c\n", student);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", finalAmount);

    return 0;
}
