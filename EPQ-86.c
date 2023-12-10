#include <stdio.h>
int main() {
    for (int i = 0; i <= 4; i++) {
        if (i == 0 || i == 4) {
            printf("$");
        } else {
            printf("*");
        }
    }
        printf("\n");
        for (int i = 0; i <= 4; i++) {
            if (i == 1 || i == 3) {
                printf("$");
            } else if(i==2) {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    for (int i = 0; i <= 4; i++) {
        if (i == 1 || i == 3) {
            printf(" ");
        } else if(i==2) {
            printf("$");
        }
        else
            printf("*");
    }
    printf("\n");
    for (int i = 0; i <= 4; i++) {
        if (i == 1 || i == 3) {
            printf("$");
        } else if(i==2) {
            printf(" ");
        }
        else
            printf("*");
    }
    printf("\n");
    for (int i = 0; i <= 4; i++) {
        if (i == 0 || i == 4) {
            printf("$");
        } else {
            printf("*");
        }
    }
    }

