#include<stdio.h>
#include<string.h>
int main()

{
    int k,j;
    char a[2][4][10];
    char temp[10];
    printf("Include some word & their meanning in dictionary:\n");
    for(j=0;j<4;j++)
    {
     gets(a[0][j]);/* firstly enter a english word then it's meanning & again english word then its meaning*/
     gets(a[1][j]);
    }
    printf("Enter a word:\n");
    gets(temp);
    for(j=0;j<4;j++)
    {k=strcmp(temp,a[0][j]);
    if(!k)
     {printf("%s ",a[1][j]);}
    }
    return 0;
}
