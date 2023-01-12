#include<stdio.h>
#include<string.h>
int main()
{
    char str[80]={"My name is mahir faisal,I live in dhaka,my home town in sitakund,chattogram."};
    int i,count1,count2,count3,j,k;
    //printf("Enter a string.\n");
    //gets(str);
    j=strlen(str);
    for(i=0;i<j;i++)
    {
        if(str[i]=='\0')
        {
            count1++;
        }
        else if(str[i]==',')
        {
            count2++;
        }
        else if(str[i]=='.')
        {
            count3++;
        }
        else
            continue;

    }
    printf("Spaces are %d\n",count1);
    printf("Commas are %d\n",count2);
    printf("periods are %d",count3);
    return 0;

}
