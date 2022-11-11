/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/06
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// In part2, update your part1 according to the instructions below


struct Employee {
    int employeeId;
    int positionId;
    char department;
    double salary;
};

int getEmployeeId() {
    int localId;
    printf("Please enter your new employee's id: ");
    scanf("%d", &localId);
    return localId;
}

int getPositionId() {
    int localPos;
    printf("Please enter your new employee's position id: ");
    scanf("%d", &localPos);
    return localPos;
}

char getDepartment() {
    char localDep;
    printf("Please enter your new employee's department: ");
    scanf(" %c", &localDep);
    return localDep;
}

double getSalary() {
    double localSal;
    printf("Please enter your new employee's department: ");
    scanf("%lf", &localSal);
    return localSal;
}
// Paste the function you write in the part1 below

// Create your functions to update position, department, salary of the employee below
// Create a display function for your print statements to display employee's information
// 
// pay attention to the update function names in the main function
// pay attention to the return types and function arguments (if needed)

void updatePosition(int* position) {
    printf("Enter new position id: ");
    scanf("%d", position); //0x123fd2
}

void updateDepartment(char* department) {
    printf("Enter new department: ");
    scanf(" %c", department);
}

void updateSalary(double* salary) {
    printf("Enter new salary: ");
    scanf("%lf", salary);
}

void display(struct Employee newEmp) {
    printf("============================================\n");
    printf("Your new employee:\n Employee ID: %d\n Position ID: %d\n Department: %c\n Salary: $%.2lf\n",
        newEmp.employeeId, newEmp.positionId, newEmp.department, newEmp.salary);
    printf("============================================\n");
}

// update the commmented display part in the below code 
int main() {
    struct Employee newEmp;

    printf("Enter the information about the new employee\n");
    printf("============================================\n\n");

    newEmp.employeeId = getEmployeeId();
    newEmp.positionId = getPositionId();
    newEmp.department = getDepartment();
    newEmp.salary = getSalary();


    // call the display function you created here
    display(newEmp);

    int inputUpdate;
    do {
        printf("1) Update position\n");
        printf("2) Update department\n");
        printf("3) Update salary\n");
        printf("0) Exit\n");
        printf("Please enter one of the code above: ");
        scanf("%d", &inputUpdate);
        if (inputUpdate == 1) updatePosition(&newEmp.positionId);
        else if (inputUpdate == 2) updateDepartment(&newEmp.department);
        else if (inputUpdate == 3) updateSalary(&newEmp.salary);
        else  printf("Please enter a valid input\n\n");

    } while (inputUpdate != 0);

    // call the display function you created here
    display(newEmp);

    return 0;
}
