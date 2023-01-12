#include<stdio.h>
int main()

{
    short int i; //a signed short int.
    unsigned short int u;//an unsigned short int.
    u=33000;  /*after showing answer, you will find a difference between i & u.Because 33000 represents an unsigned short int is
                                 interpreted as -32536 as a signed short int.*/
    i=u;
    printf("%hd %hu",i,u);
    return 0;
}
