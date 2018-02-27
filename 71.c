#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char a[30],b[30];
	printf("ENTER THE STRING");
	scanf("%s",&a);
	strcpy(b,a);
	strrev(a);
	n=strcmp(a,b);
	if(n==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}
