// ● WAP to copy a string
#include <stdio.h>
void copy(char *p1, char *p2)
{
    while(*p1 != '\0')
    {
        *p2 = *p1;
        p2++;
        p1++;
    }
}

int main()
{
    char p1[20] = "Hello";
    char p2[20];
    copy(p1,p2);
    printf("%s\n",p1);
    printf("%s\n",p2);
}