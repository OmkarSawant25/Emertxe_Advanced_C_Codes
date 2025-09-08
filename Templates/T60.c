/*WAP to demonstrate usage of structure pointer. Use * and -> operator as well.
Define a structure student with fields id, and name. Access and modify the values using structure pointer*/

#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int field_id;
};

struct student s1 = {"Omkar", 25};

int main()
{
    struct student *ptr = &s1;
    printf("Name = %s\nField id = %d\n", ptr->name, ptr->field_id);
    strcpy(ptr->name, "Sawant");
    ptr->field_id = 100;
    printf("Name = %s\nField id = %d\n", ptr->name, ptr->field_id);
}