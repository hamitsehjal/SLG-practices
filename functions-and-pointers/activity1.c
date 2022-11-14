/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/06
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// have a look at the Employee structure and main function
// try to understand the code
// create necessary functions
// pay attention to the function names in the main function
// pay attention to the return types and function arguments (if needed)

struct Employee {
    int employeeId;
    int positionId;
    char department;
    double salary;
};

// Implement your code below

// prompt messages ->   "Please enter your new employee's id: "
//                      "Please enter your new employee's position id: "
//                      "Please enter your new employee's department: "
//                      "Please enter your new employee's salary: "


// do not change the main function
int main() {
    struct Employee newEmp;

    printf("Enter the information about the new employee\n");
    printf("============================================\n\n");
        
    newEmp.employeeId = getEmployeeId();
    newEmp.positionId = getPositionId();
    newEmp.department = getDepartment();
    newEmp.salary = getSalary();

    
    printf("============================================\n");
    printf("Your new employee:\n Employee ID: %d\n Position ID: %d\n Department: %c\n Salary: $%.2lf\n", 
        newEmp.employeeId, newEmp.positionId, newEmp.department, newEmp.salary);
    printf("============================================\n");

    return 0;
}

