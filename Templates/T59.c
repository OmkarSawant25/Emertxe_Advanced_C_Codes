/* Print structure values*/
#include <stdio.h>
#include <string.h>

struct details
{
    char name[20];
    int id;
    char address[50];
};

int main()
{
    struct details s1, s2;
    // struct details s1 = {"Emertxe", 100, "Mumbai"};

    strcpy(s1.name, "Emertxe");
    s1.id = 100;
    strcpy(s1.address, "Bangalore");

    strcpy(s2.name, "Web stack");
    s2.id = 200;
    strcpy(s2.address, "Chennai");

    printf("Structure 1 has name = %s, id = %d, address = %s\n", s1.name, s1.id, s1.address);
    printf("Structure 2 has name = %s, id = %d, address = %s\n", s2.name, s2.id, s2.address);
}