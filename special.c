#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50];
    int j,count=0,c;
    printf("enter the string");
    gets(a);
    c=strlen(a);
    for(j=0;j<=c;j++)
    {
    if(33<=a[j]<=47||58<=a[j]<=64||91<=a[j]<=96||123<=a[j]<=126)
    {
        count=count+1;
    }
    }
    printf("the total no of special characters in string is %d",count);
}
