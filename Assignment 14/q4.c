/*Point of Sale System: Build a simple point of sale system using structures to
represent products with attributes like name, price, and quantity. Allow users
to add items to a cart and calculate the total cost.
*/

#include <stdio.h>

// Structure to represent a product
struct Product {
    char name[30];
    float price;
    int quantity;
};

// Function to calculate total cost
float calculateTotal(struct Product cart[], int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += cart[i].price * cart[i].quantity;
    }
    return total;
}

int main() {
    int maxCart = 50;              // Maximum number of items
    struct Product cart[maxCart];  // Cart array
    int count = 0;
    char choice;

    do {
        printf("\nEnter product name: ");
        scanf("%s", cart[count].name);

        printf("Enter price: ");
        scanf("%f", &cart[count].price);

        printf("Enter quantity: ");
        scanf("%d", &cart[count].quantity);

        count++;

        printf("Add another product? (y/n): ");
        scanf(" %c", &choice);

    } while ((choice == 'y' || choice == 'Y') && count < maxCart);

    // Display cart items
    printf("\n--- Cart Summary ---\n");
    for (int i = 0; i < count; i++) {
        printf("%s | Price: %.2f | Qty: %d | Subtotal: %.2f\n",
               cart[i].name,
               cart[i].price,
               cart[i].quantity,
               cart[i].price * cart[i].quantity);
    }

    // Display total cost
    printf("\nTotal Cost: %.2f\n", calculateTotal(cart, count));

    return 0;
}
