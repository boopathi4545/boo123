#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b=0,c=0,i;
    scanf("%s",&a);
    b=strlen(a);
    c=b-1;
    for(i=0;i<=c;i++)
    {
        if(i%2==0)
        {
            printf("%c",a[i]);
        }
    }printf("\n");
        for(i=0;i<=c;i++)
    {
        if(i%2!=0)
        {
            printf("%c",a[i]);
        }
        
    }
    return 0;
}
