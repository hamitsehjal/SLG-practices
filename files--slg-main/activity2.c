/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/27
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 20
#define ALBUM_LEN 30

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

// complete the function
void readAndDisplay() {
    // declare FILE object pointer 'fp'
    // open file "vinyls.txt" for read, assign file pointer to "fp"

    if (fp != NULL) {
        // store each line in a local string 'temp', and print it(not to the file, to the screen)
        // repeat it until the end of file
        // NOTE: following 3 line will read the 2 first two line of the file. (Titles and ====== lines)
        char temp[100];
        fgets(temp, 100, fp);
        fgets(temp, 100, fp);
        while (/*complete this part*/) { // fgetc returns EOF, fgets returns NULL if it is there is no more line/character to read. 
            //Complete this part
        }
        //Close the file
    }
    else {
        printf("Cannot open the file!\n");
    }
}

void addNewRecord() {
    const char* album = "album name", * artist = "artist name";
    struct Vinyl newVinyl = { 0 };

    // declare FILE object pointer 'fp'
    // open file "vinyls.txt" for writing to the end of the file, assign file pointer to "fp"

    if (fp != NULL) {
        //call get string for artist
        //call get string for album
        //call get price

        // use this format to print to the file -> "%-20s%-30s%-.2lf$\n"
        // close the file
    }
    else {
        printf("Cannot open the file!\n");
    }
}

// do not change the main function, review it.
int main() {
    printf("Welcome to the vinyl recording system\n");
    printf("=====================================\n\n");

    int input;
    do {
        printf("1) Display records\n");
        printf("2) Add a new record\n");
        printf("0) Exit\n");
        printf("> ");
        scanf("%d", &input);
        if (input == 1) 
            readAndDisplay();
        else if (input == 2) 
            addNewRecord();
        
    } while (input != 0);

    return 0;
}