//add to floating point numbers ,the result should only have two numbers after decimal point using pointers
#include <stdio.h>
int main() {
    float n1,n2,sum;
    float *ptr1,*ptr2;
    printf("Enter two float numbers: ");
    scanf("%f %f", &n1, &n2);
    ptr1 = &n1;
    ptr2 = &n2;
    printf("Value of num1: %.2f\n",*ptr1);
    printf("Value of num2: %.2f\n",*ptr2);
    sum = *ptr1+*ptr2;
    ptr1=&sum;
    printf("Sum: %.2f\n",*ptr1);
    return 0;
}