#include<stdio.h>
int main()

{
    char str1[80],str2[80];
    int i;
    printf("Enter the firsr string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);

    printf("%s is %d characteres long:\n",str1,strlen(str1));
    printf("%s is %d characteres long:\n",str2,strlen(str2));

    i=strcmp(str1,str2);  /*compare the string*/
    if(!i)
     printf("strings are equal:\n");
    else if(i<0)
     printf("%s is less then %s:\n",str1,str2);
    else
     printf("%s is greter then %s:\n",str1,str2);

    if(strlen(str1)+strlen(str2)<80)
     {
      strcat(str1,str2);
      printf("%s\n",str1);
     }
    strcpy(str1,str2);
    printf("%s %s\n",str1,str2);

    return 0;
}
