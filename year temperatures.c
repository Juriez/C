#include<stdio.h>
int main()

{
    int i,j;
    int temp[12][31];
    printf("Enter the temperatures of the year:\n");
    for(i=0;i<12;i++)
     {
      for(j=0;j<31;j++)
      {scanf("%d",&temp[i][j]);}
     }
     printf("Let's see the temperatures for individual month of a year:\n");
     for(i=0;i<12;i++)
     {
      for(j=0;j<31;j++)
      {printf("%d ",temp[i][j]);}
      printf("\n");
     }
     return 0;
}
