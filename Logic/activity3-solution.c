// Author: Tarik Ozturk
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int repeat, basketball, basToUse;
    repeat = 1;
    while (repeat) {
        do {
            printf("Enter the number of basketballs that the centre has: ");
            scanf("%d", &basketball);
            if (basketball < 0) {
                printf("You cannot enter negative number\n");
            }
        } while (basketball < 0);

        if (basketball == 0) {
            printf("The centre does not have any basketball\n");
        }
        else {
            do {
                printf("Enter the number of basketballs you want to use for today's training: ");
                scanf("%d", &basToUse);
                if (!(basToUse <= basketball && basToUse >= 0)) {
                    printf("The number of basketballs you can use should be between 0 and %d\n", basketball);
                }
            } while (!(basToUse <= basketball && basToUse >= 0));
        }

        printf("\nDo you confirm (enter 0) OR do you want to re-enter the information (enter 1): ");
        scanf("%d", &repeat);
    }

    printf("\nYou can use %d basketballs in today's training!", basToUse);

    return 0;
}