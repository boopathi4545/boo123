#include<stdio.h>
int main()
{
char string[50];
int j,count=0;
scanf("%s",&string[j]);
while(string[j]!='\0')
{
if((string[j]>='a')&&(string[j]<='z'))
{
count+=1;
}
j++;
}
printf("%d",count);
return 0;
}
