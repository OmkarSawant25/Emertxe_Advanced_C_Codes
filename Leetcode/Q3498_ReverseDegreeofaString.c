#include <stdio.h>

int reverseDegree(char *s)
{
    int pos = 1;
    int res = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        res += (('z' - s[i] + 1) * pos);
        pos++;
        i++;
    }
    return res;
}

int main()
{
    char str[100];

    printf("Enter a lowercase string: ");
    scanf("%s", str); // read string input (no spaces)

    int result = reverseDegree(str);
    printf("Reverse Degree of \"%s\" = %d\n", str, result);

    return 0;
}
