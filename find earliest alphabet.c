#include<stdio.h>
int main()

{
    int i;
    char ch,smallest='z';
    printf("Enter ten letters:\n");

     for(i=0;i<10;i++)
      {ch =getche();
       if(ch<smallest)
          smallest=ch;
      }
     printf("The smallest character is %c\n",smallest);
    return 0;
}
