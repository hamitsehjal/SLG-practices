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

// Paste the function you write in the part1 below

// Create your functions to update position, department, salary of the employee below
// Create a display function for your print statements to display employee's information
// 
// pay attention to the update function names in the main function
// pay attention to the return types and function arguments (if needed)



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

    return 0;
}

