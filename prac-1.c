//wap in c to find the number of characters in a string and check if its of even number or not without using string functions
#include <stdio.h>
int main()
{
    char str[]="hello nigga";
    int c=0;
    int i=0;
    while(str[i]!=NULL)
    {
        printf("%c",str[i]);
        if(str[i] !=' ')
        {
            c++;
        }
        i++;
    }
    printf("\n%d",c);
    if(c%2==0)
        printf("\nCongrats");
    else
        printf("\nFuck off");
}