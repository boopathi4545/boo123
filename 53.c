#include <stdio.h>
 int main()
 {
int a,b=0,z=0;
scanf("%d",&a);
while(a!=0)
{
	b=a%10;
	z=b+z;
	b=b/10;
}
   printf("%d",z);
	return 0;
}
