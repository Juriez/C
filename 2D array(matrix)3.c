#include<stdio.h>
int main()

{
 int i,j;
 int a[4][5];
 for(i=0;i<4;i++)
 {
  for(j=0;j<5;j++)
  {
   a[i][j]=i*j;
   printf("     %d",a[i][j]);
  }
  printf("\n");
 }
 return 0;
}
