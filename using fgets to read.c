#include<stdio.h>
#include<stdlib.h>
int main()

{
    char ch[50];
    int i;
    FILE *fp;
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

}
