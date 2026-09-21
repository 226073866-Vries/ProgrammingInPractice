#include <stdio.h>

int main() {
    float salaries[50];
    float total = 0, average, highest, lowest;
    float searchSalary;
    int found = 0;

    // Capture salaries
    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        total += salaries[i];

        if (i == 0) {
            highest = salaries[i];
            lowest = salaries[i];
        }
        if (salaries[i] > highest) highest = salaries[i];
        if (salaries[i] < lowest) lowest = salaries[i];
    }

    // Calculate average
    average = total / 50;

    // Display all salaries
    printf("\n--- Employee Salaries ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    // Display calculations
    printf("\nTotal Salary Expenditure: %.2f\n", total);
    printf("Average Salary: %.2f\n", average);
    printf("Highest Salary: %.2f\n", highest);
    printf("Lowest Salary: %.2f\n", lowest);

    // Search for a salary
    printf("\nEnter salary to search: ");
    scanf("%f", &searchSalary);
    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary %.2f found at Employee %d\n", searchSalary, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Salary %.2f not found.\n", searchSalary);

    // Sort salaries ascending 
    for (int i = 0; i < 50 - 1; i++) {
        for (int j = i + 1; j < 50; j++) {
            if (salaries[i] > salaries[j]) {
                float temp = salaries[i];
                salaries[i] = salaries[j];
                salaries[j] = temp;
            }
        }
    }

    // Display sorted salaries
    printf("\n--- Sorted Salaries (Lowest to Highest) ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    return 0;
}