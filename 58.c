#include<stdio.h>
int main()
{
int i,j;
printf("enter the number");
scanf("%d%d",&i,&j);
printf("before swap numbers ara %d and %d\n",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("after swap numbers are %d and %d",i,j);
return 0;
}
