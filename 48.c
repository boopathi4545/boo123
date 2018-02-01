#include <stdio.h>
int main()
{
	int i, b[5],avg,sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+b[i];
	}
	avg=sum/5;
	printf("%d",avg);	
	return 0;
}
