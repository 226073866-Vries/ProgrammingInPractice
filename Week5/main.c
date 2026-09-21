#include <stdio.h>

int main() {
    float salary;
    float total = 0;
    float highest, lowest;
    float average;

    // Loop through 50 employees
    for (int i = 1; i <= 50; i++) {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        // Add to total
        total += salary;

        // Initialize highest and lowest with the first salary
        if (i == 1) {
            highest = salary;
            lowest = salary;
        }

        // Update highest if current salary is greater
        if (salary > highest) {
            highest = salary;
        }

        // Update lowest if current salary is smaller
        if (salary < lowest) {
            lowest = salary;
        }
    }

    // Calculate average
    average = total / 50;

    // Display results
    printf("\n--- Salary Report ---\n");
    printf("Total salary:   %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary:  %.2f\n", lowest);

    return 0;
}