#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE NUMBER\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a<=c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
