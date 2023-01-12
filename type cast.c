#include<stdio.h>
#include<math.h>
int main()

{
    double i;

     for(i=1.0;i<=100.0;i++)
     {
        printf("The squreroot of %lf is %lf\n",i,sqrt(i));
         printf("whole number part is %d\n",(int)sqrt(i));
          printf("Fractional part is %lf\n",sqrt(i)-(int)sqrt(i));
     }

    return 0;


}
