#include <stdio.h>
int main() 
{
	int n,a[50],i,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];	
	}
	printf("\n%d",s);
	return 0;
}
