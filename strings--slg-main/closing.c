/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/20
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Walkthrough
int main() {
    int n;
    printf("Random number between 1-100\n");

    n = rand() % 100 + 1;
    printf("Random number is: %d\n", n);
    printf("Square root of the number is %.2lf\n", sqrt((double)n));

    return 0;
}
