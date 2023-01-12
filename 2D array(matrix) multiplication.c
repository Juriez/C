#include<stdio.h>
int main()

{
   int i,j,k,sum=0,d;
   int a[3][4],b[4][3],c[3][3];
   printf("Enter the vukti of matrix A:\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<4;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
   printf("Enter the vukti of matrix B:\n");

    for(j=0;j<4;j++)
   {
    for(k=0;k<3;k++)
     {
      scanf("%d",&b[j][k]);
     }
   }
   printf("Matrix: A\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<4;j++)
     {printf("     %d",a[i][j]);}
     printf("\n");
   }
    printf("Matrix: B\n");
   for(j=0;j<4;j++)
   {
    for(k=0;k<3;k++)
     {printf("     %d",b[j][k]);}
     printf("\n");
   }

   for(i=0;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
           for(k=0;k<4;k++)
           {
               c[i][j]=a[i][k]*b[k][j];
               sum=sum+c[i][j];

           }
           c[i][j]=sum;
           sum=0;
       }

   }
   printf("Matrix C= A*B:\n");
   for(i=0;i<3;i++)
   {
       for(k=0;k<3;k++)
       {
           printf("   %d",c[i][k]);
       }
       printf("\n");
   }



  return 0;
}
