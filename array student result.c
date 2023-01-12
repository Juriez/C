#include<stdio.h>
int main()

{
    int i;

    float total_mrks[10];
    int frst_mrks[10]={83,86,97,95,93,94,87,85,90,87};
    int scnd_mrks[10]={59,78,90,95,96,83,84,86,56,64};
    int finl_mrks[10]={67,89,82,94,89,84,92,94,72,78};

      for(i=0;i<=9;i++)
       {
         total_mrks[i]=frst_mrks[i]/4.0 + scnd_mrks[i]/4.0 + finl_mrks[i]/2.0;
       }
      for(i=1;i<=10;i++)
       {
         printf("Roll no: %d\tTotal marks: %f\n",i,total_mrks[i-1]);
       }
     return 0;
}
