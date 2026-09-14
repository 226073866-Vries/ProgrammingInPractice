#include <stdio.h>

int main() {
    int n, i;
    char supplierName[50];
    char preferredSupplier[50];
    float price, budget;
    int registered, documentsComplete;
    float lowestPrice = 999999; // large initial value

    printf("Enter number of suppliers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter supplier name: ");
        scanf("%49s", supplierName);

        printf("Enter tender price: ");
        scanf("%f", &price);

        printf("Enter available budget: ");
        scanf("%f", &budget);

        printf("Is supplier registered? (1=Yes, 0=No): ");
        scanf("%d", &registered);

        printf("Are all documents complete? (1=Yes, 0=No): ");
        scanf("%d", &documentsComplete);

        if (registered == 0 || documentsComplete == 0 || price > budget) {
            printf("\nSupplier: %s\n", supplierName);
            printf("Status: Disqualified\n");
        } else {
            printf("\nSupplier: %s\n", supplierName);
            printf("Status: Qualified\n");

            // Check for preferred supplier
            if (price < lowestPrice) {
                lowestPrice = price;
                snprintf(preferredSupplier, sizeof(preferredSupplier), "%s", supplierName);
            }
        }
    }

    if (lowestPrice < 999999) {
        printf("\nPreferred Supplier: %s (Lowest Price: %.2f)\n", preferredSupplier, lowestPrice);
    } else {
        printf("\nNo Preferred Supplier (none qualified)\n");
    }

    return 0;
}
