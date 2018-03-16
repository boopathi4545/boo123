#include <stdio.h>
int main() 
{
	int i,b,k,a[20];
	scanf("%d %d",&b,&k);
	for(i=1;i<=b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=b;i++)
	{
		while(i==k)
		{
			printf("\n%d",a[i]);
			break;
		}
	}
	return 0;
}
