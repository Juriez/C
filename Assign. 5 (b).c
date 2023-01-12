#include<stdio.h>
int main()

{
    int n,i;
    float p,a,r;
    printf("Enter the number of year:\n");
    scanf("%d",&n);
    printf("Enter the original amount:\n");
    scanf("%f",&p);
    printf("Enter annual rate of interest:\n");
    scanf("%f",&r);

       for(i=1;i<=n;i++)
         {
           a=p*pow((1+r),i);
           printf("After few years your total amount is %f$\n",a);
         }

    return 0;
}
