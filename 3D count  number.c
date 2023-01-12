#include<stdio.h>
int main()

{
    int i,j,k,x=1,sum=0;
    int a[3][3][3];
    printf("Count the numbers:\n");
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
       {
        for(k=0;k<3;k++)
         {
             a[i][j][k]=x;
             x++;
             printf("%d ", a[i][j][k]);
             sum=sum+a[i][j][k];
         }
       }
     }
     printf("\nsummation of those numbers is %d:\n",sum);
     return 0;
}
