#include<stdio.h>
int main()
{
int z,a[z],i,j,temp;
scanf("%d",&z);
for(i=0;i<z;i++)
scanf("%d",&a[i]);
for(i=0;i<z;i++)
{
for(j=i+1;j<z;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d\t%d",a[0],a[z-1]);
return 0;
}
