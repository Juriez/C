#include<stdio.h>
int main()

{
    int i,j;
    int serverusers[5][2]={1,14,
                           2,28,
                           3,19,
                           4,8,
                           5,15
                          };
    printf("Enter the file server:\n");
    scanf("%d",&j);
    for(i=0;i<5;i++)
     {
      if(j==serverusers[i][0])
      {printf("There are %d server users in %dth server:\n",serverusers[i][1],j);
      break;
      }
     }
     if(i==5)
     printf("Server not listed!\n");
     return 0;
}
