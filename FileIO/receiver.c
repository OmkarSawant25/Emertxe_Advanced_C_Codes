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
    FILE *fp = fopen("student.dat", "rb"); // binary read-only
    if (fp == NULL)
    {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    struct Student s;
    float totalM = 0, totalP = 0, totalC = 0;
    int count = 0;

    printf("--------------------------------------------------------------\n");
    printf("Name\t\tMaths\t\tPhysics\t\tChemistry\n");
    printf("--------------------------------------------------------------\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n", s.name, s.M, s.P, s.C);
        totalM += s.M;
        totalP += s.P;
        totalC += s.C;
        count++;
    }

    printf("--------------------------------------------------------------\n");
    if (count > 0)
        printf("Average\t\t%.2f\t\t%.2f\t\t%.2f\n", totalM / count, totalP / count, totalC / count);

    fclose(fp);
    return 0;
}
