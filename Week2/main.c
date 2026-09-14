#include <stdio.h>

int main() {
    double revenue, expenses, balance;
    int departments;
    double payroll, procurement, assets;

    // Title
    printf("---MUNICIPAL BUDGET CALCULATOR---\n\n");

    // Input
    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter Payroll amount: ");
    scanf("%lf", &payroll);

    printf("Enter Procurement amount: ");
    scanf("%lf", &procurement);

    printf("Enter Assets value: ");
    scanf("%lf", &assets);

    // Calculation
    balance = revenue - expenses;

    // Output
    printf("\n*** Municipal Financial Summary ***\n");
    printf("Revenue:      %.2lf\n", revenue);
    printf("Expenses:     %.2lf\n", expenses);
    printf("Balance:      %.2lf\n", balance);
    printf("Departments:  %d\n", departments);
    printf("Payroll:      %.2lf\n", payroll);
    printf("Procurement:  %.2lf\n", procurement);
    printf("Assets:       %.2lf\n", assets);

    return 0;
}