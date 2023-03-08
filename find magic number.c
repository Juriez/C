#include<stdio.h>
int main()

{
    int i,magic_num=67,count;

     for(count=0;count<5 && i!=magic_num; count++)
        {
         printf("Enter a number:\n");
         scanf("%d",&i);

        if(i==magic_num)
       {printf("Congratulation!! You are right\n");
       }
       else if(i>magic_num)
       {printf("Your entered number is high from magic number\n");
       }

      else if(i<magic_num)
       {printf("Your entered number is low from magic number\n");
       }

       }

      return 0;
}
