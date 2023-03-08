#include<stdio.h>
#include<conio.h>
int main()

{
    char ch;

      for(ch=getche();ch!='q';ch=getche())
        printf("\nfound the q");
          if(ch=='q')
          {
              printf("\nOK! Now you can go");
          }

    return 0;

}

