#include<stdio.h>
#include<string.h>
int main()

{
    char nwstr[100],bigstr[1000];
    int i,j;
    printf("Enter a string:\n");
    gets(bigstr);

    for(i=1;bigstr[i];i++)
    {
      printf("Enter a string:\n");
      gets(nwstr);
      if(!strcmp(nwstr,"quit"))
      {break;}
       strcat(bigstr,nwstr);

    }
    printf(bigstr);

    return 0;
}
