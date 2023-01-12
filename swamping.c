#include<stdio.h>
int main()

{
    int a[6],i,j;

      for(i=0;i<6;i++)
      {
        printf("Enter the elements:\n");
        scanf("%d",&a[i]);
      }
      j=a[2];
      a[2]=a[4];
      a[4]=j;
      for(i=0;i<6;i++)
      {
          printf("  %d ",a[i]);

      }

    return 0;
}
