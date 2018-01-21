#include<stdio.h>
int main()
{
int m,a[100],i,t;
   printf("enter the count\nenter the elements");
   scanf("%d",&m);
   scanf("%d",&a[1]);
   t=a[1];
   for(i=2;i<=m;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]<=t)
       {
           t=a[i];
       }
   }
   printf("\n%d",t);
   return 0;
}
