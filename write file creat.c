#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *file;
    file=fopen("test.txt","w");
    ch=fgetc(file);
    if(file==NULL)
    {
     printf("File does not exist.\n");
    }
    else
     {
      printf("FILE is created.\n");
      fclose(file);
     }
     return 0;
}
