#include<stdio.h>
int main()

{
    int i,j;
    char str[10][100];
    printf("Enter first string:\n");
     for(i=0;i<10;i++)
      {
      printf("%d: ",i+1);
      gets(str[i]);
      }
      do
      {
       printf("Enter number of string)(1-10):\n");
       scanf("%d",&i);
       i--;
       if(i>0 && i<10)
        printf("%s\n",str[i]);
        else
         break;
      }
      while(i>0);
      return 0;
}
