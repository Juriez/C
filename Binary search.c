#include<stdio.h>
int main()

{
    int mid_index,num;
    int low_index=0;
    int high_index=15;
    int ara[]={1,3,7,10,19,54,69,70,76,83,88,90,93,95,99,100};
    printf("Enter your number:\n");
    scanf("%d",&num);
    while(low_index<=high_index)
    {
      mid_index=(low_index+high_index)/2;
      if(num==ara[mid_index])
      {
       break;
      }
      else if(num<ara[mid_index])
      {
       high_index=mid_index-1;
      }
      else if(num>ara[mid_index])
      {
       low_index=mid_index+1;
      }
    }
    if(low_index>high_index)
    {printf("The nmuber is not found:\n");}
    else
    {printf("%d is found in the array.It is %dth element of the array.\n",ara[mid_index],mid_index+1);}
    return 0;
}
