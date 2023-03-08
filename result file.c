#include<stdio.h>
#include<stdlib.h>
int main()

{
    char a[6];
    int i;
    char ch1,ch2,ch3,ch4,ch5,ch6;
    FILE *file1;
    FILE *file2;
    FILE *file3;
    FILE *file4;
    FILE *file5;
    FILE *file6;
    file1=fopen("discrete.txt","r");
    file2=fopen("cse.txt","r");
    file3=fopen("swe.txt","r");
    file4=fopen("stat.txt","r");
    file5=fopen("ge.txt","r");
    file6=fopen("math.txt","r");
    if(file1!=NULL||file2!=NULL||file3!=NULL||file4!=NULL||file5!=NULL||file6!=NULL)
     {
         printf("Files are opened.\n");
     }
     FILE *mark;
     mark=fopen("marksheet.txt","w");


     for(i=0;i<3;i++)
     {
       ch1=fgetc(file1);
       printf("%c",ch1);
       fprintf(mark,"%c",ch1);
     }
     fprintf(mark,"\n");
     printf("\n");
     for(i=0;i<3;i++)
     {
       ch2=fgetc(file2);
       printf("%c",ch2);
       fprintf(mark,"%c",ch2);
     }
     fprintf(mark,"\n");
     printf("\n");
     for(i=0;i<3;i++)
     {
       ch3=fgetc(file3);
       printf("%c",ch3);
       fprintf(mark,"%c",ch3);
     }
     fprintf(mark,"\n");
     printf("\n");
     for(i=0;i<3;i++)
     {
       ch4=fgetc(file4);
       printf("%c",ch4);
       fprintf(mark,"%c",ch4);
     }
     fprintf(mark,"\n");
     printf("\n");
     for(i=0;i<3;i++)
     {
       ch5=fgetc(file5);
       printf("%c",ch5);
       fprintf(mark,"%c",ch5);
     }
     fprintf(mark,"\n");
     printf("\n");
     for(i=0;i<3;i++)
     {
       ch6=fgetc(file6);
       printf("%c",ch6);
       fprintf(mark,"%c",ch6);
     }
     fprintf(mark,"\n");
     printf("\n");
    if(mark!=NULL)
     {
         printf("File is created.\n");
     }







}
