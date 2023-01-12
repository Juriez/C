#include<stdio.h>
int main()

{
    int i,j;
    char text[][100]={"when","in","the "
                    "course","of","human "
                    "events",""
                   };
    for(i=0;text[i][0];i++)
     {
      for(j=0;text[i][j];j++)
      {printf("%c",text[i][j]);
      }
       printf(" ");
     }
     return 0;
}
