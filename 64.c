#include<stdio.h>
int main()
{
	int a,b,x;
	printf("enter the numbers:\n");
	scanf("%d%d",&a,&b);
	x=a+b;
	if(x%2==0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
return 0;
}
