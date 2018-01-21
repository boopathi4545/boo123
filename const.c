#include<stdio.h>
int main()
{
   int m,b[100],i,temp,j,k;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
       scanf("%d",&b[i]);
   }
   for(j=1;j<=m;j++)
   {
      for(k=j+1;k<=m;k++)
      {
        if(b[j]>=b[k])
        {
        temp=b[j];
        b[j]=b[k];
        b[k]=temp;
        }
      }
   }
        printf(" %d\t",b[j/2]);
        return 0;
}
