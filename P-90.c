//Write a c program to access elements of an array using pointers.
#include <stdio.h>
int main() {
    int arr[5];
    int *ptr;
    printf("Enter 5 elements for the array: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    printf("You have entered \n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, *(ptr + i));
    }
}