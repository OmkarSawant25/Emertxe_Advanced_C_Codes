#include <stdio.h>
#include <string.h>
int main()
{
    char char_array_1[5] = {'H', 'E', 'L', 'L', 'O'};
    char char_array_2[] = "Hello";
    printf("%zu\n", strlen(char_array_2));
    printf("%zu\n", sizeof(char_array_2));

    char *str = "Omkar";
    printf("%zu\n", sizeof(str));


    return 0;
}