#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool palindrome(char *str, int i)
{
    int n = strlen(str);
    if (i >= n / 2)
        return true;
    if (tolower(str[i]) != tolower(str[n - i - 1]))
        return false;
    return palindrome(str, i + 1);
}

int main()
{
    char str[] = "Madam";
    printf("%d\n", palindrome(str, 0)); // Output: 1
}
