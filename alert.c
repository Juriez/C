#include<stdio.h>
int main()

{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

      if(n==15)
        printf("Very good.Now concentrate on your text book\n");
      else if(n!=15)
        printf("you are wrong\a");
    return 0;
}
