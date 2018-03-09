#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,b,c,count=0;
    scanf("%s",&a);
    b=strlen(a);
    c=b-1;
    for(i=0;i<=c;i++)
    {
        for(j=i+1;j<=c;j++)
        {
            if(a[i]==a[j])
            count++;
        }
    }
    if(count==0)
    {
        printf("isogram");
    }
    else
    {
        printf("not isogram");
    }
    return 0;
}
