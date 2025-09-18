#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int P;
    int C;
    int M;
};

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student s[size];
    FILE *fp = fopen("student.dat", "wb"); // binary write-only
    if (fp == NULL)
    {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter name of student: ");
        scanf("%s", s[i].name);
        printf("Enter Physics, Chemistry and Maths marks: ");
        scanf("%d%d%d", &s[i].P, &s[i].C, &s[i].M);

        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }

    fclose(fp);
    printf("Student records saved successfully!\n");
    return 0;
}
