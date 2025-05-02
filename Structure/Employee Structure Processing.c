#include <stdio.h>

// Define the structure "Employee"
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};

int main() {
    // Declare variables to store details for three employees
    struct Employee employee1, employee2, employee3;

    // Input details for the first employee
    printf("Input details for Employee 1:\n");
    printf("Employee ID: ");
    scanf("%d", &employee1.employeeID);
    printf("Name: ");
    scanf("%s", employee1.name); // Assuming names do not contain spaces
    printf("Salary: ");
    scanf("%f", &employee1.salary);

    // Input details for the second employee
    printf("\nInput details for Employee 2:\n");
    printf("Employee ID: ");
    scanf("%d", &employee2.employeeID);
    printf("Name: ");
    scanf("%s", employee2.name);
    printf("Salary: ");
    scanf("%f", &employee2.salary);

    // Input details for the third employee
    printf("\nInput details for Employee 3:\n");
    printf("Employee ID: ");
    scanf("%d", &employee3.employeeID);
    printf("Name: ");
    scanf("%s", employee3.name);
    printf("Salary: ");
    scanf("%f", &employee3.salary);

    // Find the employee with the highest salary
    struct Employee highestSalaryEmployee;
    if (employee1.salary >= employee2.salary && employee1.salary >= employee3.salary) {
        highestSalaryEmployee = employee1;
    } else if (employee2.salary >= employee1.salary && employee2.salary >= employee3.salary) {
        highestSalaryEmployee = employee2;
    } else {
        highestSalaryEmployee = employee3;
    }

    // Display information for the employee with the highest salary
    printf("\nEmployee with the Highest Salary:\n");
    printf("Employee ID: %d\n", highestSalaryEmployee.employeeID);
    printf("Name: %s\n", highestSalaryEmployee.name);
    printf("Salary: %.2f\n", highestSalaryEmployee.salary);

    return 0;
}
