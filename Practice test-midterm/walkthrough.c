/*********************
* AUTHOR: Tarik Ozturk
* Date: 2022/10/09
* ********************
* Walkthrough Question:
* This tests your ability to read (walk) through a piece of code and write out what is happening at each step in the code.
* Please explain the step-by-step order of operation and output of the code

* Assume user enters the following inputs in order:
-> 12.5
-> 9.8
-> 6.7
-> 13.4
-> 40

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    double prices[4];
    double discount;

    for (int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++) {
        printf("Please enter the price of %d. item: $", i + 1);
        scanf("%lf", &prices[i]);
    }

    do {
        printf("\nPlease enter the discount (between 0-100): %%");
        scanf("%lf", &discount);
        printf("\n");
    } while (discount < 0.0 || discount > 100.0);
    discount /= 100.0;
    

    for (int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++) {
        printf("The price of %d. item after discount :$%.2lf \n", i + 1, prices[i] * (1-discount));
    }
    return 0;
}
