#include <stdio.h>
int main() 
{
int a[100],m,i,median;
printf("\n enter the no. of values");
scanf("%d",&m);
printf("\n median element is");
for(i=0;i<m;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
	median=a[(i+1)/2];
}
printf("\t %d ",median);
return 0;
} 
