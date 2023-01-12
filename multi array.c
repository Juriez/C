#include<stdio.h>
int main()
{
    int i,j=0,k=0,l=0,a[3][3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
               a[i][j][k]=l;
               l++;
               printf("%d ",a[i][j][k]+1);
            }

        }


    }
    return 0;
}
