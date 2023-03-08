#include<stdio.h>
#include<stdlib.h>
int main()

{
    char a[100][200];
    int i,j;
    FILE *fp;
    FILE *file;
    fp=fopen("ABC.txt","r");
    if(fp==NULL)
     {printf("File Dne.\n");}
     else
      {
      printf("File is opened.\n");
      for(i=0;i<10;i++)
       {
        for(j=0;j<20;j++)
         {
          a[i][j]=fgetc(fp);
          printf("%c",a[i][j]);
         }
       }
       fclose(fp);
      }
      file=fopen("copy.txt","w");
    if(fp==NULL)
     {printf("File Dne.\n");}
     else
      {
      printf("File is opened.\n");
      for(i=0;i<10;i++)
       {
        for(j=0;j<20;j++)
         {
          fprintf(file,"%c",a[i][j]);
         }
       }
       fclose(file);
      }

}
