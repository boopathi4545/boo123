#include <stdio.h>
int main() 
{
	int l,b,h;
	scanf("%d %d %d",&l,&b,&h);
	int v,tsa;
	v=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("\nVOLUME=%d",v);
	printf("\nTSA=%d",tsa);
	return 0;
}
