/*
Enter the number of students : 2
Enter name of the student : Tingu
Enter P, C and M marks : 23 22 12
Enter name of the student : Pingu
Enter P, C and M marks : 98 87 87
--------------------------------------------------------------
Name Maths Physics Chemistry
--------------------------------------------------------------
Tingu 12 23 22
Pingu 87 98 87
--------------------------------------------------------------
Average          49.50            60.50            54.50
-------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

struct student
{
    char name[25];
    int p;
    int c;
    int m;
};

int main()
{
    int size;
    float pav = 0, mav = 0, cav = 0;
    printf("Enter the number of students : ");
    scanf("%d", &size);
    struct student s[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter name of the student : ");
        scanf("%s", s[i].name);
        printf("Enter P, C and M marks : ");
        scanf("%d %d %d", &s[i].p, &s[i].c, &s[i].m);
        pav = s[i].p + pav;
        cav = s[i].c + cav;
        mav = s[i].m + mav;
    }
    pav /= size;
    cav /= size;
    mav /= size;

    printf("--------------------------------------------------------------\n");
    printf("Name Maths Physics Chemistry\n");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("%s %d %d %d\n", s[i].name, s[i].p, s[i].c, s[i].m);
    }

    printf("--------------------------------------------------------------\n");
    printf("Average\t\t%.2f\t\t%.2f\t\t%.2f\n",mav,pav,cav);
    printf("--------------------------------------------------------------\n");
}