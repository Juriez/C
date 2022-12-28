#include<stdio.h>
int main()

{
    int array[10]={5,3,6,7,8,9,10,25,38,26};
    float j=0,avg;
    int i;
    for(i=0;i<=9;i++)
     {
      j=j+array[i];

     }
     avg=j/10;
     printf("Avg is %f:\n",avg);

    return 0;
}
