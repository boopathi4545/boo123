#include<stdio.h>
main()
{
  char str[50]="hello world";
  int j,count=0;
  for(j=0;str[j]!='\0';j++)
  {
     if(str[j]=='')
     {
       count++;
       }
       }
       printf("the count of space is %d",count);
}
