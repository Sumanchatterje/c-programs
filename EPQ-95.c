//to print hello world using pointers
#include <stdio.h>
int main() {
    char *ptr = "Hello World";
    while (*ptr != NULL) {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}