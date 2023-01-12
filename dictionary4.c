#include<stdio.h>
#include<string.h>
int main()

{
    int n,i,j;
    scanf("%d",&n);
    char word[2][n][10];char search[10];

    for(i=0;i<n;i++)
    {
        scanf("%s",&word[0][i]);
        scanf("%s",&word[1][i]);
    }
    printf("Enter a word.\n");
    scanf("%s",&search);
    for(i=0;i<n;i++)
    {
        if(!strcmp(search,word[0][i]))
        {
            printf("%s",word[1][i]);

        }

    }

}
