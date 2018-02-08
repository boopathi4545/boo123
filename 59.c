#include<stdio.h>
int main()
{
int x[10],a,b,temp;
for(a=0;a<10;a++)
scanf("%d",&x[a]);
for(a=0;a<10;a++)
{
for(b=a+1;b<10;b++)
{
if(x[a]>x[b])
{
temp=x[a];
x[a]=x[b];
x[b]=temp;
}
}
}
printf("the max number is %d",x[9]);
return 0;
}
