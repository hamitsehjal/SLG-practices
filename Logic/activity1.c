// Author: Tarik Ozturk

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Display appropriate message according to the table
    // You MUST use switch case 

    
    // prompt user to enter H - for hot, W - for warm, C - for cold weather
    // display appropriate message
    //    H --> "Weather should be above 30 degrees!"
    //    W --> "Weather should be between 10 and 30 degrees!"
    //    C --> "Weather should be below 10 degrees!"
    // if any other input, display "Not a valid input" by default
    
    char weather;
    printf("How is the weather? (H - for hot, W - for warm, C - for cold) ");
    scanf("%c", &weather);
    printf("\n");

    //WRITE YOUR CODE HERE



    return 0;
}
