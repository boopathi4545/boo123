#include <stdio.h>
int main() 
 {
int n,r,rev=0;
 printf("\n enter the number:");
 scanf("%d",&n);
 do
 {
 r=n%10;
 rev=rev*10+r;
 n=n/10;
 }while(n!=0);
 printf("\n%d",rev);
 return 0;
 }
