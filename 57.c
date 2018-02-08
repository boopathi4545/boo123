#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d",&a,&b);
printf("the numbers are %d and %d\n",a,b);
c=a;
a=b;
b=c;
printf("the swap numbers are %d and %d\n",a,b);
return 0;
}
