/*WAP to demonstrate usage of nested struct
Define two structures: Address and Student.
The Student structure must contain an instance of the Address structure.
Address structure can have state (string) and zip code (int)
Create two student variable stud1 and stud2
stud1 must be initialized during declaration
stud2 must be read from user
Print both the structures */

#include <stdio.h>
#include <string.h>
struct address
{
    char state[25];
    int zip_code;
};
struct student
{
    int id;
    char name[25];
    struct address a;
};

int main()
{
    struct student s1 = {25, "Omkar", "Maharashtra", 400101};
    struct student s2;
    printf("Enter the name of the student : ");
    scanf("%s", s2.name);
    printf("Enter the Id of the student : ");
    scanf("%d", &s2.id);
    printf("Enter the State : ");
    scanf("%s", s2.a.state);
    printf("Enter the Zip code : ");
    scanf("%d", &s2.a.zip_code);
    printf("Details of Student 1\n");
    printf("Name : %s\nId : %d\nState : %s\nZip Code : %d\n", s1.name, s1.id, s1.a.state, s1.a.zip_code);
    printf("\nDetails of Student 2\n");
    printf("Name : %s\nId : %d\nState : %s\nZip Code : %d\n", s2.name, s2.id, s2.a.state, s2.a.zip_code);
}