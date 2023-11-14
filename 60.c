#include <stdio.h>
int main()
{
    int m=0;
    int n=0;
    printf("Enter size : \n");
    scanf("%d",&m);

    int arr[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=i+1;
    }
    printf("Enter the index whose value should be showed \n");
    int index=0;
    scanf("%d",&index);
    if(index<0)
        printf("Error \n");
    else
        printf("The value is %d \n",arr[index]);

}