#include<stdio.h>
#include<stdlib.h>
int main()

{
    char ch;
    FILE *fp;
    fp=fopen("file1.txt","r");
    do
    {
      ch=fgetc(fp);
      printf("%c",ch);

    }
    while(ch!=EOF);
    fclose(fp);
    return 0;
}
