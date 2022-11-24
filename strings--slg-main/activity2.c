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


struct Email {
    char receiver[RECEIVER_LEN];
    char subject[SUBJECT_LEN];
    char content[CONTENT_LEN];
    int containAttachment;
};

// Copy and paste your functions from activity-1 below
// Create isContainAttachment function
//      - takes user input (string)
//      - if the input is yes then return zero else return anything except for zero
//      - HINT: use a string library function to compare


// Complete the function
void updateContent(char content[]) {
    int input;
    printf("1) Delete the previous content, enter the new email content\n");
    printf("2) Keep the previous content, add on it\n");
    printf("0) Do not change the content\n");
    printf(": ");
    scanf("%d", &input);

    if (input == 1) {
        // get new mail content
        // "Please enter the new content: "
    }
    else if (input == 2) {
        // complete the following code HINT: use string library
        printf("Previous content: %s\n", content);
        printf("Add on it: ");
    }
}

// do not change the main function
int main() {
    struct Email newEmail = { 0 };

    printf("Email\n");
    printf("=====\n");

    getReceiver(newEmail.receiver);
    getSubject(newEmail.subject);
    getContent(newEmail.content);


    newEmail.containAttachment = isContainAttachment();
    updateContent(newEmail.content);

    printf("Receiver: ");
    puts(newEmail.receiver);
    printf("Subjectline: ");
    puts(newEmail.subject);
    printf("Content: ");
    puts(newEmail.content);
    printf("Attach file? ");
    if (newEmail.containAttachment == 0) printf("Yes");
    else printf("No ");
    return 0;
}
