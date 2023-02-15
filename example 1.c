#include<stdio.h>
int main()

{
    unsigned u;
    short s;
    long l;
    printf("enter an unsigned:\n");
    scanf("%u",&u);
    printf("enter a long:\n");
    scanf("%ld",&l);
    printf("enter a short:\n");
    scanf("%hd",&s);

    printf("%ld %hd %u",l,s,u);
    return 0;
}
