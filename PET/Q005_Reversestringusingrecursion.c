//  Reverse string using recursion

#include <stdio.h>

void strrev(char *a)
{
    if(*(a+1))
    {
        strrev(a+1);
    }
    printf("%c",*a);
}

int main()
{
    char a[100] = "Omkar";
    printf("Before Reversing the string : %s\n", a);
    printf("After Reversing the string : ");
    
    strrev(a);
    printf("\n");

    return 0;
}