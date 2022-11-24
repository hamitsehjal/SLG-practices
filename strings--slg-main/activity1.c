/**********************
* AUTHOR: Tarik Ozturk
* Date: 2022/11/20
* *********************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define RECEIVER_LEN 25
#define SUBJECT_LEN 35
#define CONTENT_LEN 500


// have a look at the Email structure and main function and macros
// try to understand the code
// create necessary functions
// pay attention to the function names in the main function

struct Email {
    char receiver[RECEIVER_LEN];
    char subject[SUBJECT_LEN];
    char content[CONTENT_LEN];
    int containAttachment;
};

// Implement your code below
// Only use %[] to scan user input when it is necessary!

// Create getReceiver, getSubject, getContent functions
// Observe the function usage in the main function 
// Define with appropriate return type & argument
// prompt messages ->   "Enter the receiver: "
//                      "Enter the subjectline: "
//                      "Enter the content: "


// do not change the main function
// observe the functions
int main() {
    struct Email newEmail = { 0 };

    printf("Email\n");
    printf("=====\n");

    getReceiver(newEmail.receiver);
    getSubject(newEmail.subject);
    getContent(newEmail.content);

    printf("Receiver: ");
    puts(newEmail.receiver);
    printf("Subjectline: ");
    puts(newEmail.subject);
    printf("Content: ");
    puts(newEmail.content);
    
    return 0;
}
