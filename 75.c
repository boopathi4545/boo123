#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int b;
	printf("ENTER THE STRING");
	scanf("%s",&a);
	b=strlen(a);
	if(b%2!=0)
	{
		
		a[b/2]='*';
		printf("the string is %s",a);
	}
	
	return 0;
}
