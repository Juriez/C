#include<stdio.h>
int main()

{
    int i,j,k,l=0,sum=0,a[3][3][3];
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
               a[i][j][k]=l;
               l++;
               printf("%d ",a[i][j][k]+1);
               sum=sum+(a[i][j][k]+1);
            }
        }
    }printf("\n%d",sum);
}
