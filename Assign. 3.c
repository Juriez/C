#include<stdio.h>
int main()

{
    int i,j,n,space;
    printf("How many lines do you want?\n");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
       {
         for(space=n-i;space>=1;space--)
           {
                printf(" ");
           }
           for(j=1;j<=2*i-1;j++)
           {

             printf("*");
           }
         printf("\n");
       }
    return 0;
}
