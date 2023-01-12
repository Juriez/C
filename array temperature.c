#include<stdio.h>
int main()

{
    int temp[31],i,j=0,min=100,max=0,days;
    float avg;
    printf("How many days in a month?\n");
    scanf("%d",&days);

     for(i=1;i<=days;i++)
      {
       printf("Enter noonday temperature for day %d:",i);
       scanf("%d",&temp[i]);
      }
     for(i=1;i<=days;i++)
      {
        j=j+temp[i];
      }
      printf("Total temperatur is %d:\n",j);
      avg=j/days;
      printf("Average temperature is %f:\n",avg);

       for(i=1;i<=days;i++)
        {
         if(min>temp[i])
           min=temp[i];
         else if(max<temp[i])
           max=temp[i];
        }
         printf("The maximum temperature is %d:\n",max);
         printf("The minimum temperature is %d:\n",min);
    return 0;
}
