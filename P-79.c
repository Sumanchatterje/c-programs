//Write a program in C to create a union.
#include <stdio.h>
#include <string.h>
// Define a union named MyUnion
union MyUnion {
    int intval;
    float flval;
    char strval[20];
};
int main() {
    // Declare a variable of type MyUnion
    union MyUnion myVar;
    // Assign values to the union members
    myVar.intval = 42;
    printf("Integer value: %d\n", myVar.intval);
    myVar.flval = 3.14;
    printf("Float value: %f\n", myVar.flval);
    printf("Integer value after float assignment: %d\n", myVar.intval);
    strcpy(myVar.strval, "Hello");
    printf("String value: %s\n", myVar.strval);
    printf("Integer value after string assignment: %d\n", myVar.intval);

    return 0;
}
