#include<stdio.h>
#include<string.h>
int main()

{
    char command[80],temp[80];
    int i,j;
    for( ; ; )
    {
    printf("Operations?\n");
    gets(command);
    if(!strcmp(command,"quit"))
    break;

     printf("Enter the first number:\n");
     gets(temp);
     i=atoi(temp);
     printf("Enter the second number:\n");
     gets(temp);
     j=atoi(temp);
     if(!strcmp(command,"add"))
      printf("%d\n",i+j);
     if(!strcmp(command,"subtraction"))
      printf("%d\n",i-j);
     if(!strcmp(command,"multiplication"))
      printf("%d\n",i*j);
      if(!strcmp(command,"divide"))
      printf("%d\n",i/j);
      else
       printf("unknown command\n");
    }

    return 0;
}
