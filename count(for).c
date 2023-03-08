#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    i=0;
    while(i<=10)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
    i=0;
    do
    {
        printf("%d ",i);
        i++;
    }
    while(i<=10);
    return 0;
}
