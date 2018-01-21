#include<stdio.h>
int main()
{
   int m,a[100],i,temp,j,k;
   printf("enter the count\nenter the elements");
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=1;j<=m;j++)
   {
      for(k=j+1;k<=m;k++)
      {
        if(a[j]>=a[k])
        {
        temp=a[j];
        a[j]=a[k];
        a[k]=temp;
            
        }
      }
    printf(" %d\t",a[j]);
    
    }
    return 0;
}
