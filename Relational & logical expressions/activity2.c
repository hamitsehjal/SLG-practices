#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char fCourse, sCourse, fHour, sHour, courseCode, courseTime;

    /*
    Programming with C == IPC144
    Linux systems == ULI101
    9am == morning
    5pm == evening
    */

    printf("Enter the prof's course-1(Programming w/ C(C/c) | Linux systems(L/l)): ");
    scanf(" %c", &fCourse);
    printf("Enter the prof's course-2(Programming w/ C(C/c) | Linux systems(L/l)): ");
    scanf(" %c", &sCourse);
                
    printf("\nEnter the prof's course-1 hour(9 AM(N/n) | 5 PM(F/f): ");
    scanf(" %c", &fHour);
    printf("Enter the prof's course-2 hour(9 AM(N/n) | 5 PM(F/f): ");
    scanf(" %c", &sHour);
                
    printf("\nEnter your course code (IPC144(I/i) | ULI101(U/u)): ");
    scanf(" %c", &courseCode);
    printf("Is your lecture in the morning(M/m) | evening(E/e): ");
    scanf(" %c", &courseTime);

    // complete the code in the last 2 printf statements

    printf("\nThe table shows how your courses align to the professor course\n\n");
    printf("                  Course  | Time \n");
    printf("First Course  -->  %d         %d \n", /*Write your code here*/);

    printf("Second Course -->  %d         %d \n", /*Write your code here*/);
    
    return 0;
}