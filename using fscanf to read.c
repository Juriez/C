#include<stdio.h>
#include<stdlib.h>
int main()

{
    FILE *file;
    char ch1[50];
    char ch2[50];
    int i;
    file=fopen("a.txt","r");
    if(file==NULL)
     {
      printf("File does not exist.\n");
     }
     else
      {printf("File is created successfully.\n");
       fscanf(file,"%s %s",&ch1,&ch2);
       printf("%s %s",ch1,ch2);
       fclose(file);
      }
}
