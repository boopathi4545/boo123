#include <stdio.h>
int main() 
{
	int num,rem,r=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		r=(r*10)+rem;
		num=num/10;
	}
	num=r;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==1)
		{
		printf("%d ",rem);
		}
		num=num/10;
	}
	return 0;

}
