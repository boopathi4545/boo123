#include<stdio.h>
void main()
{
char str={"boopathi10"};

int j,flag ;
for(j=o;j!=0;j++)
{
if(((str[j]>='a')||(str[j]<='z'))&&((str[j]>=0)||(str[j]<=9)))
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==0)
{
printf("yes");
}
else
{
printf("no");
}
}
