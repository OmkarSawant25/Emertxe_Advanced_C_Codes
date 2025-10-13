#include <stdio.h>

int main()
{
    char *s[3];
    s[0] = "Array";
    s[1] = "of";
    s[2] = "Strings";

    for (int i = 0; i < 3; i++)
        printf("%s ", s[i]);

    return 0;
}
