#include<stdio.h>
float soundspeed(void);/*Non-general version of soundspeed.*/
int main()

{
    int distance;
    printf("The number of seconds is %f",soundspeed());
    return 0;

}

float soundspeed(void)
{
    int distance;
    float seconds;
    printf("Enter the value of distance:-\n");
    scanf("%d",&distance);
    seconds=distance/1129;
    return seconds;
}
