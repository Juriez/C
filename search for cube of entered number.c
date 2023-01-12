#include<stdio.h>
int main()

 {
    int i,j,k;
    int a[10][3]={1,1,1,
                  2,4,8,
                  3,9,27,
                  4,16,64,
                  5,25,125,
                  6,36,216,
                  7,49,343,
                  8,64,512,
                  9,81,729,
                  10,100,1000
                  };
    printf("Enter a number:\n");
    scanf("%d",&j);
    for(i=0;i<10;i++)
    {
     if(j==a[i][0])
      {printf("It's cube value is %d is in %dth line.\n",a[i][2],i+1);
      printf("It's cube root value is %d and also square value is %d.\n",a[i][0],a[i][1]);
      }
    }
    return 0;
 }
