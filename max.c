#include<stdio.h>
int main()
{
int  m,a[100],i,t=0;
   printf("enter the count\nenter the elements");
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]>=t)
       {
           t=a[i];
       }
   }
   printf("\n%d",t);
   return 0;
}
