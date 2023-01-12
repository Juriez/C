#include<stdio.h>
int main()

{
    printf("%hd",42340);/*This won't work right,because the specified specifier is for signed short integer
                          but the entered number is a long integer.It will work correctly,
                           if the specifier is used %hu instead of %hd*/
    return 0;
}
