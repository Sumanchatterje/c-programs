//Write a c program to implement all string functions.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[50], str4[50];
    printf("Enter string 1: \n");
    gets(str1);

    printf("Enter string 2: \n");
    gets(str2);

    printf("Full Length of string 1  >> %lu\n", strlen(str1));
    printf("Length of string 2 up to 7 >> %lu\n", strnlen(str2, 7));
    strcpy(str3, str1);
    strcat(str1, str2);

    printf("Full concatenation of string 1 and 2 >> %s \n", str1);

    strcpy(str1, str3);
    strncat(str1, str2, 5);

    printf("Concatenation of string 1 and 2 up to 5 characters >> %s \n", str1);

    printf("Comparing string 1 with 3 >> %d \n", strcmp(str1, str3));
    printf("Comparing first 3 characters of string 1 and 2 >> %d \n", strncmp(str1, str2, 3));

    strcpy(str4, str1);
    printf("Copying string one to another variable >> %s\n", str4);

    strncpy(str4, str2, 4);
    printf("Copying the first 4 characters of string one to another variable >> %s\n", str4);

    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("The character %c first occurs in index: %ld in string 1\n", ch, strchr(str1, ch));
    printf("The character %c last occurs in index: %ld in string 1\n", ch, strrchr(str1, ch));

    printf("Enter a substring: ");
    scanf("%s",str4);

    printf("Searching substring in string 1 >> %s\n", strstr(str1, str4));

    printf("Comparing string 1 with 2 ignoring case >> %d\n", strcasecmp(str1, str2));
    printf("Comparing string 1 with 2 up to 5 characters ignoring case >> %d\n", strncasecmp(str1, str2, 5));

    return 0;
}

