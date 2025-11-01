/* WAP to accept students record from user. Store all the data in as a binary file */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int phy, chem, math;
};

int main() {
    struct Student s;
    FILE *fp;
    int n;

    fp = fopen("students.txt", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);            // exit - cause normal process termination
    }

    printf("Enter the number of students : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of the student : ");
        scanf("%s", s.name);
        printf("Enter P, C and M marks : ");
        scanf("%d %d %d", &s.phy, &s.chem, &s.math);

        fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);
    printf("\nStudent records saved successfully.\n");
    return 0;
}
