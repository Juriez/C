#include<stdio.h>
int main()

{
    int i;
    printf("Mailing list menu\t\t\n\n");
    printf("1.Enter addresses\n\n");
    printf("2.Delete addresses\n\n");
    printf("3.Search the list\n\n");
    printf("4.print the list\n\n");
    printf("5.Quit\n\n");

     do
     {
          printf("Enter the number of your choice(1-5)\n");
          scanf("%d",&i);
     }
     while(i<1||i>5);
     return 0;
}
