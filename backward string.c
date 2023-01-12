#include<stdio.h>
#include<stdlib.h>
int main()

{
    int i,l;
    char str[100];
    char str2[100];
    //l=strlen(str);
   l=0;
    printf("Enter a string:\n");
    gets(str);
     for(i=(strlen(str)-1);i>=0;i--)
      {

          str2[l]=str[i];
          l++;
          //printf("%c",str[i]);
      }
      printf(str2);

      return 0;
}
