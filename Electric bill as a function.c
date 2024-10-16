#include <stdio.h>

float TotalAmount(float chargesPerUnit, int unitConsumed) {
    return unitConsumed * chargesPerUnit;
}

float Surcharge(float totalAmount) {
    return totalAmount * 0.85;
}

int main() {
    int customerID, unitConsumed;
    char customerName[50];
    float chargesPerUnit, totalAmount, surcharge = 0;

    // Prompt user to enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Unit Consumed: ");
    scanf("%d", &unitConsumed);

    // Calculate charges per unit based on units consumed
    if (unitConsumed < 200) {
        chargesPerUnit = 1.20;
    } else if (unitConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    // Calculate total amount to pay
    totalAmount = TotalAmount(chargesPerUnit, unitConsumed);

    // Apply surcharge if total bill exceeds Kshs. 400
    if (totalAmount > 400) {
        surcharge = Surcharge(totalAmount);
    }

    // Ensure minimum bill is Kshs 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }

    // Display customer details and total amount to pay
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per unit: Ksh %.2f\n", chargesPerUnit);
    printf("Total amount to pay: Ksh %.2f\n", totalAmount);

    return 0;
}
