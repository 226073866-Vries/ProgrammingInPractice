#include <stdio.h>

int main() {
    float basicSalary, housingAllowance, transportAllowance, tax;
    float gross, net;

    // Title
    printf("EMPLOYEE SALARY CALCULATOR\n\n");

    // Input
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housingAllowance);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transportAllowance);

    printf("Enter Tax: ");
    scanf("%f", &tax);

    // Calculation
    gross = basicSalary + housingAllowance + transportAllowance;
    net = gross - tax;

    // Output
    printf("\n--- Salary Summary ---\n");
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary:   %.2f\n", net);

    return 0;
}
