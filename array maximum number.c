#include<stdio.h>
int main()

{
    int i,j;
    int a[5];
    int max=a[0];
    printf("Enter 5 random number:\n");
    for(i=0;i<5;i++)
     {scanf("%d",&a[i]);}
     for(j=0;j<5;j++)
    {
     printf("Your entered %dth number: %d\n",j+1,a[j]);
    }
     for(i=0;i<5;i++)
      {
       if(max<a[i])
        max=a[i];
      }

      printf("Maximum number is %d from your entered number.\n",a[i]);
      return 0;
}
