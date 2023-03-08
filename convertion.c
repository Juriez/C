#include<stdio.h>
int main()

{
   int i;
   float feet,meter,ounces,pounds;

    printf("CONVERT\n");
    printf("   1.feet to meters\n");
    printf("   2.meters to feet\n");
    printf("   3.ounces to pounds\n");
    printf("   4.pounds to ounces\n");
    printf("   5.Quit\n");


    do
    {
     printf("Enter your choice:\n");
     scanf("%d",&i);

    switch(i)
    {
     case 1:
      printf("Enter the value of feet:\n");
      scanf("%f",&feet);
      meter=feet*.3048;
      printf("%f is meter",meter);
      break;
     case 2:
      printf("Enter the value of meters:\n");
      scanf("%f",&meter);
      feet=meter*3.28;
      printf("%f is feet",feet);
      break;
     case 3:
      printf("Enter the value of pounds:\n");
      scanf("%f",&pounds);
      ounces=pounds*16;
      printf("%f is ounces\n",ounces);
       break;
     case 4:
      printf("Enter the value of ounces:\n");
      scanf("%f",&ounces);
      pounds=ounces/16;
      printf("%f is pounds",pounds);
       break;
     case 5:
      printf("Quit\n");
    }
    }
    while(i<1 || i>5);


    return 0;

    }




