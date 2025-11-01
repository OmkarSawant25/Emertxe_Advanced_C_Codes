/*Description:

Suppose k = 3 (say taking 3 distinct characters ).
Let 3 distinct characters be a , b, c.
Suppose ‘n’ is the string length to be formed using ‘k’ distinct words.
Let n be 6
The string should be formed in such a way that there should not be any consecutive repetitions of the strings.

Pr-requisites:- Strings
                Pointers
                Arrays

Objective: -

To understand the concept of
String manipulation
Note:- You don't have to evaluate this assignment. Just submit it. For your reference, you can run the code once

Inputs: -
    Positive integers No of character C, Length of the string N and C distinct characters

Sample execution: -
Test Case 1:
user@emertxe] ./nrps
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
Possible NRPS is abcbca

Test Case 2:
Enter the number characters C : 3
Enter the Length of the string N : 7
Enter 3 distinct characters : a b a
Error : Enter distinct characters */

#include <stdio.h>

void nrps(char [], int, int);

int main()
{
    int C;
    int N;
    char str[50];
    printf("Enter the number characters C : ");
    scanf("%d", &C);
    printf("Enter the Length of the string N : ");
    scanf("%d", &N);
    getchar();
    printf("Enter 3 distinct characters : ");
    scanf("%[^\n]", str);
    
    for(int i = 0; i < C; i++)
    {
        for(int j = i + 1; j < C; j++)
        {
            if(str[i] == str[j])
            {
                printf("Error : Enter distinct characters\n");
                return 0;
            }
        }
    }

    nrps(str, C, N);
    printf("Possible NRPS is %s",str);
    return 0;
}
// void nrps(char str[], int c, int n)
// {
//     int j = c;
//     int a = c - 1;
//     int b = 2 * c - 1;
//     while(j < n)
//     {
//         if((j + 1) % c == 0)
//         {
//             str[j] = str[j - b];
//             j++;
//         }
//         else
//         {
//             str[j] = str[j - a];
//             j++;
//         }
//     }
//     str[j] = '\0';
// }

void nrps(char str[], int c, int n)
{
    int shift = 0;
    for(int i = 0; i < n; i++)
    {
        str[i] = str[(i + shift) % c];  // rotate
        if((i + 1) % c == 0)            // after full cycle, shift
            shift++;
    }
    str[n] = '\0';
}
