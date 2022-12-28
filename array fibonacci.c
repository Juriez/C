#include<stdio.h>
int main()

{
  int i,j;
  int c[15];
  c[0]=0;
  c[1]=1;
   for(i=2;i<15;i++)
    {
      c[i]=c[i-1]+c[i-2];
    }
    printf("Let's see a fibonacci series:\n");
    for(i=0;i<15;i++)
     {printf("%d,",c[i]);}
     return 0;
}
