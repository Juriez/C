#include<stdio.h>
int merge(int a,int b,int c,int d);
int main()
{
    int n,i,l,h,m;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=1;h=n;m=(l+h)/2;
    merge(arr[200],l,m,h);
}
int merge(int a,int b,int c,int d)
{
   int j,k,g,temp[200];
   g=b;
   j=c+1;
   k=b;
   while(g<=c && j<=d)
   {
       if(a[g]<=a[j])
       {temp[k]=a[g];
       g++;k++;}
       else
       {
           temp[k]=a[j];
           k++;j++;
       }
   }
   if(g>c)
   {
       while(j<=d)
       {
           temp[k]=a[j];
           k++;j++;
       }
   }
   else
   {
       while(g<=c)
       {
           temp[k]=a[g];
           g++;k++;
       }

   }
   for(k=b;k<=d;k++)
   {
       a[k]=temp[k];
   }
   merge();
   for(k=b;k<=d;k++)
   {
       printf("%d",a[k]);
   }
}
