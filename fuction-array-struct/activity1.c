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

// 1- setStudentsInfo ->
//        takes array of Student, returns nothing
//        store user input for each student's studentId and grade appropriately 
//        use -> "Enter %d. student's id: " && "Enter %d. student's grade: " as prompt messages
// 2- displayStudentsInfo ->
//        takes array of Student, returns nothing
//        display the students info
//        use this format ->  "student id: %d, grade: %d\n"
// 3- failedStudentsNum ->
//        takes array of Student, returns integer number
//        calculate the number of student who failed

// Implement your code below

int main() {
    printf("Programming with C course data\n");
    printf("==============================\n\n");

    struct Student students[STUDENT_NUM];
    // use     setStudentsInfo function to set students data
    // 
    // use     displayStudentsInfo function to display students data

    int numFailed = /*use failedStudentsNum and assign the return value to numFailed int*/;
    printf("Number of students failed the course: %d", numFailed);
    
    return 0;
}
