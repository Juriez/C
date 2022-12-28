#include<stdio.h>
int main()

{
    int ara[5]={2,5,4,7,8};
    printf("%d\n",ara[-1]);     /*This program can't run properly*/
    printf("%d\n",ara[5]);
    printf("%d\n",ara[100]);

    return 0;
}
