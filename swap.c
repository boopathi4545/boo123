#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d%d",&x,&y);
printf("before swapping x=%d,y=%d",x,y);
z=x;
x=y;
y=z;
printf(after swapping x=%dy=%d,x,y);
return 0;
}
