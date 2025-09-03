#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    char address[60];
};
static struct Student s1;
int main()
{
    struct Student *sptr = &s1;
    sptr->id = 10;
    printf("id is %d\n", sptr->id);

    return 0;
}
