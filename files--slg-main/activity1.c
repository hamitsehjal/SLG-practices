/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/27
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 20
#define ALBUM_LEN 30

// Review the struct and functions. 
// Review the main function. Try to understand how to use them
// Complete the following code

struct Vinyl {
    char artist[NAME_LEN];
    char album[ALBUM_LEN];
    double price;
};

void getString(char string[], const char msg[]) {
    printf("Enter the %s: ", msg);
    scanf(" %[^\n]", string);
}

void getPrice(double *price) {
    printf("Enter the vinyl price: ");
    scanf(" %lf", price);
}

int main() {
    const char *album = "album name", *artist = "artist name";
    printf("Welcome to the vinyl recording system\n");
    printf("=====================================\n\n");

    struct Vinyl vinyls[3] = { 0 };
    
    // prompt user to enter all(3) of the vinyls data, store them appropriately
    // 
        //call get string for artist
        //call get string for album
        //call get price

    // declare FILE object pointer 'fp'
    // open file "vinyls.txt" for write, assign file pointer to "fp"

    if (fp != NULL) {
        fprintf(fp, "%-20s%-30s%-s$\n", "Artist", "Album", "price");
        fprintf(fp, "========================================================\n");
        // write each vinyl data to the file
            //use this format to print to file -> "%-20s%-30s%-.2lf$\n"
        
        // close the file
    }
    else {
        printf("Cannot open the file!\n");
    }

    return 0;
}