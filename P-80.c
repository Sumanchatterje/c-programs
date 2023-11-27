//write a program in C to create a union inside a structure
#include <stdio.h>
#include <string.h>
union mu {
    int intValue;
    float floatValue;
    char stringValue[20];
};
struct ms {
    int dataType;
    union mu hun;
};
int main() {
    struct ms hs;
    hs.dataType = 1;
    hs.hun.intValue = 42;
    printf("Integer value: %d\n", hs.hun.intValue);
    hs.dataType = 2;
    hs.hun.floatValue = 3.14;
    printf("Float value: %f\n", hs.hun.floatValue);
    hs.dataType = 3;
    strcpy(hs.hun.stringValue, "Hello");
    printf("String value: %s\n", hs.hun.stringValue);
    return 0;
}