//largest among three numbers using pointers
#include<stdio.h>
int main()
{
    int num1=100;
    int num2=1500;
    int num3=200;
    int *p1=&num1;
    int *p2=&num2;
    int *p3=&num3;
    if((*p1>*p2)&&(*p1>*p3)){
        printf("The greatest number is : %d",*p1);
    }
    if((*p2>*p1)&&(*p2>*p3)){
        printf("The greatest number is : %d",*p2);
    }
    else{
        printf("The greatest number is : %d",*p3);
    }
}
