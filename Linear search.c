#include<stdio.h>
int main()

{
    int i,j;
    int a[]={2,6,9,17,80,76,65,52};
    printf("Enter your number:\n");
    scanf("%d",&j);
    for(i=0;i<7;i++)
     {
      if(j==a[i])
       break;
     }
     if(j!=a[i])
     printf("Sorry! Not found:\n");
     else if(j==a[i])
     printf("Your desired number is %d.It is %dth element of the array.\n",a[i],i+1);
     return 0;
}
