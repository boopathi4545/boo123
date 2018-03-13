#include <stdio.h>
int main() 
{
int x,y,r,gcd;
printf("\n enter the first number:");
scanf("%d",&x);
printf("\n enter the second number:");
scanf("%d",&y);
do
{
r=x%y;
if(r==0)
break;
x=y;
y=r;
}while(r!=0);
gcd=y;
printf("\n the gcd of the given number is: %d",gcd);
return 0;
}
