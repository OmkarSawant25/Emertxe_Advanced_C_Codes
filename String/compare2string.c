#include <stdio.h>
int compare(char *a, char *b)
{
    int flag = 1;
    while (*a != '\0' && *b != '\0')
    {
        if (*a != *b)
        {
            flag = 0;
            break;
        }
        a++;
        b++;
    }
    if(flag) return 0;
    else return 1;
}
int main()
{
    // char *str1;
    // char *str2;

    // printf("Enter str1 : ");
    // scanf("%s", str1);
    // printf("Enter str2 : ");
    // scanf("%s", str2);
    
    char str1[20];
    char str2[20];
    scanf("%[^\n]", str1);
    getchar();
    scanf("%[^\n]", str2);

    int res = compare(str1, str2);
    if(res == 0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
    return 0;
}
