#include <stdio.h>
#include <stdlib.h>

#define SWAP(type, num1, num2) \
    {                          \
        type temp = num1;      \
        num1 = num2;           \
        num2 = temp;           \
    }

int main()
{
    int choice;
    printf("1. Int\n");
    printf("2. char\n");
    printf("3. short\n");
    printf("4. float\n");
    printf("5. double\n");
    printf("6. string\n");
    printf("Enter you choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int num1, num2;
            printf("Enter the num1 : ");
            scanf("%d", &num1);
            printf("Enter the num2 : ");
            scanf("%d", &num2);
            SWAP(int, num1, num2);
            printf("num1 : %d\n", num1);
            printf("num2 : %d\n", num2);
            break;
        }

        case 2:
        {
            char num1, num2;
            printf("Enter the num1 : ");
            scanf("%c", &num1);
            printf("Enter the num2 : ");
            scanf("%c", &num2);
            SWAP(char, num1, num2);
            printf("num1 : %c\n", num1);
            printf("num2 : %c\n", num2);
            break;
        }

        case 3:
        {
            short num1, num2;
            printf("Enter the num1 : ");
            scanf("%hd", &num1);
            printf("Enter the num2 : ");
            scanf("%hd", &num2);
            SWAP(short, num1, num2);
            printf("num1 : %hd\n", num1);
            printf("num2 : %hd\n", num2);
            break;
        }

        case 4:
        {
            float num1, num2;
            printf("Enter the num1 : ");
            scanf("%f", &num1);
            printf("Enter the num2 : ");
            scanf("%f", &num2);
            SWAP(float, num1, num2);
            printf("num1 : %f\n", num1);
            printf("num2 : %f\n", num2);
            break;
        }
        case 5:
        {
            double num1, num2;
            printf("Enter the num1 : ");
            scanf("%lf", &num1);
            printf("Enter the num2 : ");
            scanf("%lf", &num2);
            SWAP(double, num1, num2);
            printf("num1 : %lf\n", num1);
            printf("num2 : %lf\n", num2);
            break;
        }
        case 6:
        {
            char *num1;
            num1 = malloc(50);
            printf("Enter the num1 : ");
            scanf("%s", num1);
            char *num2;
            num2 = malloc(50);
            printf("Enter the num2 : ");
            scanf("%s", num2);
            SWAP(char *, num1, num2);
            printf("num1 : %s\n", num1);
            printf("num2 : %s\n", num2);
            break;
        }
    }
}