#include<stdio.h>
int main()

{
    int item[100],i,j,a,b;
    printf("How many numbers?\n");
    scanf("%d",&j);
    for(i=0;i<j;i++)
     {
      printf("Enter your choice:\n");
      scanf("%d",&item[i]);
     }
     for(i=0;i<j;++i)
     {
         for(i=0;i<j;++i)
     {
         for(a=j-1;a>=i;--a)
         {
             if(item[a-1]>item[a])
             {
                b=item[a-1];
                item[a-1]=item[a];
                item[a]=b;
             }
         }
     }
     }
     printf("The sorted list is:\n");
     for(b=0;b<j;b++)
     {
         printf("%d ",item[b]);
     }


    return 0;
}
