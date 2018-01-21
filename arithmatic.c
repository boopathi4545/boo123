#include<stdio.h>
int main()
{
int a,d,m,i,t=0,sum=0;
printf("enter the starting element 'a' \n enter the difference \n enter the limit upto which it is to be calculated\n");
scanf("%d%d%d",&a,&d,&m);
for(i=a;i<=m;i=i+d)
{
   if(t==0)
        {
            sum=a;
            t=1;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
