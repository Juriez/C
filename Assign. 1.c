#include<stdio.h>
int main()

{
    int i,j,n;
    printf("How many lines do you want?\n");
    scanf("%d",&n);

      for(i=n;i>=1;i--)
       {
         for(j=1;j<=i;j++)
           {
           printf("*");
           }
         printf("\n");
       }
    return 0;
}
