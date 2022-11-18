/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/13
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PASSING_GRADE 50
#define STUDENT_NUM 5

struct Student {
    int studentId;
    int grade;
};

// Before you start part-2,
// copy and paste your functions you created in part-1 below

// Create 2 function:
// 1- recoveryTestAll
//      takes array of Student, returns nothing
//      update all the failed students data
//      prompt user to enter new grade for each failed students
//      use ->  "Please enter the new grade for student with id #%d: " as prompt message
// 2- individualRecoveryTest
//      takes array of Student and a studentId, returns nothing
//      update the failed student data who has the studentId(argument passed to function)
//      prompt user to enter new grade for each the specific failed student
//      use ->  "Please enter the new grade for student with id #%d: " as prompt message
// 
// Implement your code below

int main() {
    /*
        COPY AND PASTE THE CONTENT OF THE MAIN FUNCTION IN PART-1 HERE
    */

    int input;
    do {
        printf("1) Make a recovery test to all failed students\n");
        printf("2) Make a recovery test to a certain student\n");
        printf("0) No more recovery test\n");
        printf(": ");
        scanf("%d", &input);
        if (input == 1) {
            // use function recoveryTestAll to update test results of failed students
        }
        else if (input == 2) {
            // get the user input for student id to do recovery test
            // use function individualRecoveryTest to update test result of the student with id of user input
        }
        else if(input != 0) printf("Please enter a valid input\n");
    } while (input != 0);

    numFailed = failedStudentsNum(students);

    printf("==============================\n");
    printf("Data:\n");
    printf("Number of students failed the course: %d\n", numFailed);
    printf("Student IDs are: ");
    // display all of the failed students ids here
    return 0;
}
