#include<stdio.h>
int max;/* this is a global variable*/

void f1();
int main()

{
    max=10;
    f1();
    return 0;
}               /*As a global variable,the function main()& f1() both can use the variable max.*/
void f1()

{
    int i;
    for(i=0;i<max;i++)
     printf("%d ",i);
}

