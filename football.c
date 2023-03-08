#include<stdio.h>
#include<stdlib.h>
int main()

{
    int i,count=0,j;
    char a[100];
    scanf("%s",&a);
    for(i=0;i<strlen(a)-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
            if(count>=6)
            {break;}
        }
        else
            {
                count=0;}
    }
    if(count>=6)
        printf("YES");
    else
        printf("NO");
}
