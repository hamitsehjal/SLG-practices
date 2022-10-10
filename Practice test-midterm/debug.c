/*********************
* AUTHOR: Tarik Ozturk
* Date: 2022/10/09
* ********************
* Book store's program is going to ask you for price input for each book,
* You should be able to enter the price, store it in bookPrices array, and display the books with their prices 
* 
* HOWEVER,
* There are some bugs in the below code. Please:
* 
- Write the original line number on which you found the bug,
- Explain what was wrong with this line
- Explain what you did to fix the bug
- Show the original line(s) of code with the bug in it
- Show your fixed line(s) of code that corrects the bug

*/
#include <stdio.h>
int main(void) { 
    
    char bookTitle1[16] = "Why Nations Fail";
    char bookTitle2[9] = "Outliers";
    char bookTitle3[] = "Guns, Germs, and Steel";

    char* books[3] = [ bookTitle1, bookTitle2, bookTitle3 ];

    double bookPrices[3];
    for (i = 0; i < 3; i++) {
        printf("Please enter the %c's price: $", books[i]);
        scanf("%d", bookPrices[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("The %c's price is $%d\n", books[i], bookPrices[i]);
    }
   
    return 0;
}
