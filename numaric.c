#include<stdio.h>
int main()
{
    char m;
    printf("Enter the word ");
    scanf("%s",&m);
    if(m>='0'&&m<='9')
    {
        printf("yes is numeric",m);        
}
else
{
    printf("no is not numeric",m);
    return 0;
}
}
