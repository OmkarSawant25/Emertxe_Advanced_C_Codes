/* WAP to read the members using structure variable and print using structure variable
Instruction: Structure should have char, int, float, char name[20]
Input : a 10 15.6 hello
Output : a 10 15.600000 hello  */

#include <stdio.h>
#include <string.h>

struct A
{
    char a;
    int b;
    float c;
    char name[20];
};

int main()
{
    struct A var1 = {'a', 10, 15.6, "hello"};
    printf("%c %d %f %s\n", var1.a, var1.b, var1.c, var1.name);
}