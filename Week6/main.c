#include <stdio.h>
#include <string.h>

int main() {
    // A. Employee Salaries
    float salaries[50], totalSalary = 0, averageSalary, highestSalary, lowestSalary;
    float searchSalary;
    int found = 0;

    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        totalSalary += salaries[i];

        if (i == 0) {
            highestSalary = salaries[i];
            lowestSalary = salaries[i];
        }
        if (salaries[i] > highestSalary) highestSalary = salaries[i];
        if (salaries[i] < lowestSalary) lowestSalary = salaries[i];
    }

    averageSalary = totalSalary / 50;

    printf("\n--- Employee Salaries ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }
    printf("Average Salary: %.2f\n", averageSalary);
    printf("Highest Salary: %.2f\n", highestSalary);
    printf("Lowest Salary: %.2f\n", lowestSalary);

    printf("Enter salary to search: ");
    scanf("%f", &searchSalary);
    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary %.2f found at Employee %d\n", searchSalary, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Salary %.2f not found.\n", searchSalary);

    // B. Department Budgets
    float budgets[10], totalBudget = 0, averageBudget;
    for (int i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        totalBudget += budgets[i];
    }

    averageBudget = totalBudget / 10;

    // Sort budgets ascending
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (budgets[i] > budgets[j]) {
                float temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    printf("\n--- Department Budgets ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Department %d Budget: %.2f\n", i + 1, budgets[i]);
    }
    printf("Total Budget: %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

    // C. Vehicle Registrations
    char registrations[20][20], searchReg[20];
    found = 0;

    for (int i = 0; i < 20; i++) {
        printf("Enter registration number %d: ", i + 1);
        scanf("%s", registrations[i]);
    }

    printf("\n--- Vehicle Registrations ---\n");
    for (int i = 0; i < 20; i++) {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }

    printf("Enter registration number to search: ");
    scanf("%s", searchReg);

    for (int i = 0; i < 20; i++) {
        if (strcmp(registrations[i], searchReg) == 0) {
            printf("Registration %s found at Vehicle %d\n", searchReg, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Registration %s not found.\n", searchReg);

    return 0;
}
