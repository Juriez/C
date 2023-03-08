#include<stdio.h>
#include<conio.h>
int main()

{
    float i;
    char ch;
    for(i=1;i<=100;i++)
     {
       printf("%f %f %f %f\n",i,i+i*.1,i+i*.15,i+i*.2);
       printf("More? (Y/N)");
       ch=getche();
        printf("\n");

        if(ch='N')
        break;

     }
    return 0;
}
