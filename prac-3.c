//wap in c to convert decimal to binary
#include <stdio.h>
int main()
{
    int i=0;
    int dec=10;
    int bin[8];
    while (dec>0) {
        bin[i] = dec%2;
        dec= dec/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
}
