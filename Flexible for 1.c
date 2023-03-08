#include<stdio.h>
int main()

{
    int i;
    char ch='a';
    for(i=0;ch!='q';i++)
      {
        printf("\npass:%d\n",i);
        ch=getche();
      }
     printf("\nCongress!");
    return 0;
}
