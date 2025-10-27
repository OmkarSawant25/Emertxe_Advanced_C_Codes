#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int scoreOfString(char *s);

int main()
{
    char s[100];
    scanf("%s", s);
    printf("%d\n", scoreOfString(s));
    return 0;
}

int scoreOfString(char *s)
{
    // Your logic here
    int count = 0;
    int i = 1;
    while(s[i] != '\0')
    {
        count += abs(s[i] - s[i-1]); 
        i++;
    }
    return count;
}
