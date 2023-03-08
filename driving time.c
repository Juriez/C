#include<stdio.h>
int main()
{
    float distance,ava_speed;
    int num;
    printf("Eenter the number of drive time\n");
    scanf("%d",&num);
    printf("Enter the distance\n");
    scanf("%f",&distance);
    printf("Enter the avarage speed\n");
    scanf("%f",&ava_speed);

      for( ;num;num--)
        {printf("driving time is %f\n",distance/ava_speed);
        }

    return 0;
}

