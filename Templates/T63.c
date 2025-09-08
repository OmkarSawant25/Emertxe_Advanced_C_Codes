/* WAP to demonstrate Passing structure to function using pass by value and reference */

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
};

void add(struct student a, struct student *b)
{
    a.id = a.id + 10;
    b->id += 10;
}

int main()
{
    struct student s1;
    struct student s2;

    s1.id = 10;
    s2.id = 20;
    printf("\nBefore\ns1 = %d\ns2 = %d\n", s1.id, s2.id);
    add(s1, &s2);
    printf("\nAfter\ns1 = %d\ns2 = %d\n", s1.id, s2.id);
}