#include<stdio.h>
int main()

{
    int i=0;
    char j;

     for(j=1;j<=100;j++) /*you can use char variable instead of int*/
       i=j+i;
       printf("Total is %d:\n",i);
       return 0;
}
