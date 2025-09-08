/*WAP to create two arrays of student structure name stud_list1 and stud_list2
    1. stud_list1 -
    Initialize during declaration and print the structure
    2. stud_list2 -
    Read the values from user and print the structure*/

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[25];
    char state[30];
};

int main()
{
    struct student stud_list[2];
    stud_list[0].id = 10;
    strcpy(stud_list[0].name, "Omkar");
    strcpy(stud_list[0].state, "Maharashtra");

    printf("Enter the name of the student : ");
    scanf("%s", stud_list[1].name);
    printf("Enter the Id of the student : ");
    scanf("%d", &stud_list[1].id);
    printf("Enter the State : ");
    scanf("%s", stud_list[1].state);

    printf("Details of Student 1\n");
    printf("Name : %s\nId : %d\nState : %s\n\n", stud_list[0].name, stud_list[0].id, stud_list[0].state);
    printf("\nDetails of Student 2\n");
    printf("Name : %s\nId : %d\nState : %s\n\n", stud_list[1].name, stud_list[1].id, stud_list[1].state);
}