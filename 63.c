#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0, k;
 
    printf("enter a string\n");
    scanf("%[^\n]s", s);
    for (k = 0;s[k] != '\0';k++)
    {
        if (s[k] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count );
    return 0;
}
