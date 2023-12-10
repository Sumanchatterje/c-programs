//wap in c to convet binary to decimal
#include <stdio.h>
int main()
{
    int bin=1010;
    int dec=0;
    int rem=0;
    int base=1;
    while(bin>0)
    {
        rem = bin%10;
        dec+=rem*base;
        bin/=10;
        base*=2;
    }
    printf("%d",dec);

}