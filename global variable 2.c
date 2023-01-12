#include<stdio.h>
int power(void);
int m,e;
int main()

{

    printf("Enter the value of m:-\n");
    scanf("%d",&m);
    printf("Enter the value of e:-\n");
    scanf("%d",&e);
    printf("%d raised to the %d power is %d\n",m,e,power());

    return 0;
}

int power(void)

{
    int temp,temp2;
    temp=1;
    temp2=e;
    for(;temp2>0;temp2--)
    temp=temp*m;
    return temp;
}

