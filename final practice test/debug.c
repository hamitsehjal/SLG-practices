/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/12/04
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

#define NAME_LENGTH 20

struct Employee {	   
	char name[NAME_LENGTH + 1];
	const int empId;
	double salary;
	char department[NAME_LENGTH + 1];
};

// pass employee with address
// Increase the the salary by amount
void promote(/* Complete this part */, double amount) { 
	/* Complete this part */
}

// pass employee with address & string for new department
// Replace the old department with the new department
void changeDepartment(/* Complete this part */) { 
    /* Complete this part */;
}

// Do not change this function
void displayEmployeeData(struct Employee employee) {
    printf("Employee Data:\n");
    printf("    Name: %s\n", employee.name);
    printf("    ID: %d\n", employee.empId);
    printf("    Salary: $%.2f\n", employee.salary);
    printf("    Department: %s\n", employee.department);
}

int main(void) {
    struct Employee emp = { "Tarik", 123321, 75000.00, "UI/UX" };

    int input;
    do {
        printf("1) Promote the employee\n");
        printf("2) Change the employee's department\n");
        printf("3) Display employee's data\n");
        printf("0) Exit\n");
        printf("> ");
        scanf("%d", &input);
        if (input == 1){
            double rise;
            printf("Please enter amount of rise: $");
            // store the amount to increase in 'rise' and call 'promote' function appropriately
            /* Complete this part */;
        }
        else if (input == 2){
            char newDepartment[NAME_LENGTH + 1] = { 0 };
            printf("Please enter new department: ");
            // store the new department name in 'newDepartment' and call 'changeDepartment' function appropriately
            /* Complete this part */;
        }
        else if (input == 3)
            displayEmployeeData(emp);

    } while (input != 0);
	
	return 0;
}