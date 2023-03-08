#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{
    char ch[50];
    int i,l;
    FILE *fp;
    FILE *file;
    fp=fopen("a.txt","r");
    if(fp==NULL)
     {printf("File does not exist.\n");
     }
    else
    {
        printf("File is opened successfully.\n");
        while(!feof(fp))
        {
          fgets(ch,20,fp);
          printf("%s\n",ch);
        }


        fclose(fp);
    }

    file=fopen("b.txt","w");
    if(file==NULL)
      {printf("File does not exist.\n");
     }
    else
    {
        printf("File is opened successfully.\n");

        fclose(file);
    }
}
