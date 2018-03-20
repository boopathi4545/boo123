#include <stdio.h>
int main() 
{
	float p,r,re;
	int s,n;
	scanf("%f %d %f",&p,&n,&r);
	re=((p*n*r)/100);
	s=floor(re);
	printf("\n%d",s);
	return 0;
}
