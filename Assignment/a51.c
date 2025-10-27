#include <stdio.h>
#include <string.h>

typedef struct _Student
{
    int rollno;
    char name[30];
    int marks[10];
    int average;
    char grade;
} Student;

int main()
{
    int noOfStudents, noOfSubjects;
    char subject[10][20];
    Student student[50];

    printf("Enter no.of students : ");
    scanf("%d", &noOfStudents);
    printf("Enter no.of subjects : ");
    scanf("%d", &noOfSubjects);

    for (int i = 0; i < noOfSubjects; i++)
    {
        printf("Enter the name of subject %d : ", i + 1);
        scanf("%s", subject[i]);
    }

    for (int i = 0; i < noOfStudents; i++)
    {
        printf("----------Enter the student details-------------\n");
        printf("Enter the student Roll no. : ");
        scanf("%d", &student[i].rollno);
        printf("Enter the student %d name : ", i + 1);
        scanf("%s", student[i].name);

        int total = 0;
        for (int j = 0; j < noOfSubjects; j++)
        {
            printf("Enter %s mark : ", subject[j]);
            scanf("%d", &student[i].marks[j]);
            total += student[i].marks[j];
        }

        student[i].average = total / noOfSubjects;

        if (student[i].average >= 90)
            student[i].grade = 'A';
        else if (student[i].average >= 80)
            student[i].grade = 'B';
        else if (student[i].average >= 70)
            student[i].grade = 'C';
        else if (student[i].average >= 60)
            student[i].grade = 'D';
        else
            student[i].grade = 'F';
    }

    int choice;
    do
    {
        printf("----Display Menu----\n");
        printf("1. All student details\n");
        printf("2. Particular student details\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Roll No.   Name           ");
            for (int j = 0; j < noOfSubjects; j++)
                printf("%-15s", subject[j]);
            printf("Average       Grade\n");

            for (int i = 0; i < noOfStudents; i++)
            {
                printf("%-10d %-15s", student[i].rollno, student[i].name);
                for (int j = 0; j < noOfSubjects; j++)
                    printf("%-15d", student[i].marks[j]);
                printf("%-16d %c\n", student[i].average, student[i].grade);
            }
        }
        else if (choice == 2)
        {
            int subChoice;
            printf("----Menu for Particular student----\n");
            printf("1. Name.\n");
            printf("2. Roll no.\n");
            printf("Enter your choice : ");
            scanf("%d", &subChoice);

            int found = 0;
            if (subChoice == 1)
            {
                char searchName[30];
                printf("Enter the name of the student : ");
                scanf("%s", searchName);

                for (int i = 0; i < noOfStudents; i++)
                {
                    if (strcmp(student[i].name, searchName) == 0)
                    {
                        printf("Roll No.   Name           ");
                        for (int j = 0; j < noOfSubjects; j++)
                            printf("%-15s", subject[j]);
                        printf("Average       Grade\n");

                        printf("%-10d %-15s", student[i].rollno, student[i].name);
                        for (int j = 0; j < noOfSubjects; j++)
                            printf("%-15d", student[i].marks[j]);
                        printf("%-16d %c\n", student[i].average, student[i].grade);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student not found!\n");
            }
            else if (subChoice == 2)
            {
                int searchRoll;
                printf("Enter the roll number of the student : ");
                scanf("%d", &searchRoll);

                for (int i = 0; i < noOfStudents; i++)
                {
                    if (student[i].rollno == searchRoll)
                    {
                        printf("Roll No.   Name           ");
                        for (int j = 0; j < noOfSubjects; j++)
                            printf("%-15s", subject[j]);
                        printf("Average       Grade\n");

                        printf("%-10d %-15s", student[i].rollno, student[i].name);
                        for (int j = 0; j < noOfSubjects; j++)
                            printf("%-15d", student[i].marks[j]);
                        printf("%-16d %c\n", student[i].average, student[i].grade);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student not found!\n");
            }
            else
            {
                printf("Invalid choice!\n");
            }
        }
        else
        {
            printf("Invalid choice!\n");
        }

        char cont;
        printf("Do you want to continue to display(Y/y) : ");
        scanf(" %c", &cont);
        if (cont != 'Y' && cont != 'y')
            break;

    } while (1);

    return 0;
}
