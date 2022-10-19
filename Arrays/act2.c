/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/10/09
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_NUM_EMP 10
#define MAX_SALARY 150000.0
int main(void) {
    // COPY AND PASTE YOUR ACT1 HERE 
    // PART2 STARTS AFTER THE END OF PART1 (AFTER PROMPTING FOR EACH SALARY)

    /*Second part*/

    // Ask each employees position
    // if not either of 'c' or 'b' 'f' -> prompt again
    // store positions appropriately
    

    // Display menu (written)
    int display;
    printf("----------------------------------------------------------------\n");
    do {
        printf("Display by selecting one of the following\n");
        printf("1) Display all\n");
        printf("2) Display by ID\n");
        printf("3) Display by position\n");
        scanf("%d", &display);
    } while (display < 0 || display > 3);

    // complete below code - DO NOT hardcode
    if (display == 1) {
        // display all employee in format like -> "1. employee's salary is $3000, and position is c\n"
        

    }
    else if (display == 2) {
        // prompt user to enter id, and display the employee's data who has that ID
        // "Enter the ID of employee you want to display: "
        // use the same format to display 
        

    }
    else {
        // prompt user to enter category code, and display the employees who are in that category
        // use the same format to display 
        


    }
    
    return 0;
}
