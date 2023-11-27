//Write a program in c to read data from a file and display.
#include <stdio.h>
int main()
{
    FILE *fp;
    char fn[100],data[100];
    printf("Enter the file name:");
    gets(fn);
    fp= fopen(fn,"r");
    if(fp!=NULL)
    {
        printf("FILE OPENED!\n");
        fgets(data,100,fp);
        printf("%s",data);
    }
    else
    {
        printf("ERROR!");
    }
}