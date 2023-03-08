#include<stdio.h>
int main()

{
    float pi=3.1416,r,s1,s2;
    char ch;
    ch=getchar();

      if(ch=='A')
        {printf("Enter the value of radious:\n");
        scanf("%f",&r);
        printf("The area of circle is %f\n",pi*r*r);
        }
      else if(ch=='T')
        {printf("Enter the value of base &hight:\n");
        scanf("%f %f",&s1,&s2);
        printf("The area of triangle is %f\n",(s1*s2)/2);
        }
      else if(ch=='R')
        {printf("Enter the value of length & width:\n");
        scanf("%f %f",&s1,&s2);
        printf("The area of rectangular is %f",s1*s2);
        }
     return 0;
}
