/*WAP to read and print value of a character variable using pointer*/

#include <stdio.h>
void print(char *);
int main()
{
    char num;
    char *ptr = &num;
    printf("Enter the input :");
    scanf("%c", &num);
    print(ptr);
    return 0;
}
void print(char *ch)
{
    printf("Character entered is %c\n", *ch);
}