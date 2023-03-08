#include<stdio.h>
#include<stdlib.h>
int main()

{
    char ch[50];
    FILE *fp;
    fp=fopen("a.txt","w");
    if(fp==NULL)
     {printf("File does not exist.\n");
     }
    else
    {
        printf("File is opened successfully.\n");
        printf("Enter your name?");
        gets(ch);
        fputs(ch,fp);
        printf("String is written successfully.\n");
        fclose(fp);
    }

}
