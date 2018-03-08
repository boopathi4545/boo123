#include<stdio.h>
int main() 
{
	int a,b,i,temp=0;
	printf("\nenter the two numbers:");
	for(i=1;i<=3;i++)
  {
	scanf("%d %d",&a,&b);
	if(a>b)
   {
       printf("\n%d",a-b);
   }
	else
	{
         temp=a;
         a=b;
         b=temp;
		printf("\n%d",a-b); 
      }
   } 
	return 0;
}
