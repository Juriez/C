#include<stdio.h>
int main()

{
    unsigned long int distance;
    long int seconds;
    printf("Enter the distance:\n");
    scanf("%lu",&distance);

     seconds=distance/186000;
     printf("Light takes to travel that distance %ld seconds \a",seconds);

    return 0;
}
