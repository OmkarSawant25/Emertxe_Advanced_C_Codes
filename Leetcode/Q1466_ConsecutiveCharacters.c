#include <stdio.h>
#include <string.h>

int maxPower(char *s);

int main()
{
    char s[] = "abbcccddddeeeeedcba";
    int result = maxPower(s);
    printf("Maximum power: %d\n", result);
    return 0;
}

// int maxPower(char *s)
// {
//     int i = 0;
//     int max = 0;
//     while(s[i] != '\0')
//     {
//         int count = 1;
//         while(s[i+1] == s[i])
//         {
//             count++;
//             if(max <= count)
//             {
//                 max = count;
//             }
//             i++;
//         }
//         i++;
//     }
//     return max;
// }


int maxPower(char *s){
    int max = 1, count = 1;
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;
        if (count > max)
            max = count;
    }
    return max;
}
