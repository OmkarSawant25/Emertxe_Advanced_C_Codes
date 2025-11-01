/*
CW54 - WAP to read out entries by the previous program
*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[30];
    int phy, chem, math;
};

int main()
{
    struct Student s;
    FILE *fp;
    int count = 0;
    float sumPhy = 0, sumChem = 0, sumMath = 0;

    fp = fopen("students.txt", "rb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("--------------------------------------------------------------\n");
    printf("Name\tMaths\tPhysics\tChemistry\n");
    printf("--------------------------------------------------------------\n");

    while (fread(&s, sizeof(s), 1, fp))
    {
        printf("%s\t%d\t%d\t%d\n", s.name, s.math, s.phy, s.chem);
        sumPhy += s.phy;
        sumChem += s.chem;
        sumMath += s.math;
        count++;
    }

    printf("--------------------------------------------------------------\n");
    if (count > 0)
    {
        printf("Average\t%.2f\t%.2f\t%.2f\n", sumMath / count, sumPhy / count, sumChem / count);
    }
    printf("--------------------------------------------------------------\n");

    fclose(fp);
    return 0;
}
