#include<stdio.h>
#include<stdlib.h>
int main()

{
    char ch[200];
    FILE *file;
    int n,i,age;
    long long int phone;
    file=fopen("student.txt","w");
    if(file==NULL)
     {printf("File does not exist.\n");}
     else
      {
       printf("File is created successfully.\n");
       printf("How many students in your class?\n");
       scanf("%d",&n);
       for(i=0;i<n;i++)
        {
         printf("Enter the %dth students name.\n",i+1);
         scanf("%s",&ch);
         printf("Enter the %dth students age.\n",i+1);
         scanf("%d",&age);
         printf("Enter the %dth students phone number.\n",i+1);
         scanf("%lld",&phone);
         fprintf(file,"Name: %s\t\tAge: %d\tMobile: %lld\n",ch,age,phone);

        }
        fclose(file);
      }
}
