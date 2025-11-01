#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* defangIPaddr(char* address);

int main() {
    char address[] = "1.1.1.1";
    char* result = defangIPaddr(address);
    
    printf("%s\n", result);
    free(result);
    return 0;
}

// char* defangIPaddr(char* address)
// {
//     char *res = malloc(sizeof(char) * strlen(address) * 3 + 2);
//     int count = 0;
//     int i = 0;
//     while(address[i] != '\0')
//     {
//         if(address[i] == '.')
//         {
//             res[count++] = '[';
//             res[count++] = '.';
//             res[count++] = ']';
//         }
//         else
//         {
//             res[count++] = address[i];
//         }
//         i++;
//     }
//     res[count] = '\0';
//     return res;
// }


char* defangIPaddr(char* address)
{
    int len = strlen(address);
    char *res = malloc(len * 3 + 1); // safe upper bound
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (address[i] == '.') {
            res[j++] = '[';
            res[j++] = '.';
            res[j++] = ']';
        } else {
            res[j++] = address[i];
        }
    }
    res[j] = '\0';
    return res;
}