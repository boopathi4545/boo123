#include<stdio.h>
void main()
{
int num,m,n;
printf("ENTER THE NUMBER");
scanf("%d%d",&m,&n);
for(num=m;num<=n;num++)
{
if(num%2!=0)
printf("%d", num);
}
}
