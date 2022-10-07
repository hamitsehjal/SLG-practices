#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int pass, c, b, a, grade;

    printf("Enter the passing grade: ");
    scanf("%d", &pass);
    printf("Enter the minimum grade to get C: ");
    scanf("%d", &c);
    printf("Ente&r the minimum grade to get B: ");
    scanf("%d", &b);
    printf("Ente&r the minimum grade to get A: ");
    scanf("%d", &a);


    printf("\nThe grading table\n\n");
    printf("A    B    C    PASS\n");
    printf("-------------------\n");
    printf("%d   %d   %d   %d\n\n", a, b, c, pass);

    printf("Enter your grade: ");
    scanf("%d", &grade);
    printf("The table shows what your mark is\n\n");
    printf("A    B    C    D    FAIL\n");
    printf("------------------------\n");
    printf("%d    %d    %d    %d    %d\n", /**/); // focus on here

    return 0;
}