#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int n = strlen(s) - 1;
    int i = 0;
    while(i < n)
    {
        if(!isalnum(s[i]))
        {
            i++;
            continue;
        }
        if(!isalnum(s[n]))
        {
            n--;
            continue;
        }
        if(tolower(s[i]) != tolower(s[n])){
            return 0;
        }
        i++;
        n--;
    }
    return 1;
}
int main() {
    char str[100];
    scanf("%[^\n]", str);

    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
