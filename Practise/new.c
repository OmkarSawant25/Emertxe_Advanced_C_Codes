#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main()
{
    int choice;
    void *arr = malloc(8);
    int flagc1 = 0, flagc2 = 0, flagi = 0, flagf = 0, flags = 0, flagd = 0;
    printf("Menu :\n");
    do
    {
        printf("1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n\n");
        printf("Choice ---> ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                int op;
                printf("Enter the type you have to insert:\n");
                printf("1. int\n2. char\n3. short int\n4. float\n5. double\nChoice ---> ");
                scanf("%d", &op);

                switch (op)
                {
                case 1:
                    if (flagi == 0 && flagd == 0 && flagf == 0)
                    {
                        printf("Enter the int : ");
                        scanf("%d", (int *)arr + 1);
                        __fpurge(stdin);
                        flagi = 1;
                    }
                    else
                    {
                        printf("Error : Elements already exists!\n\n");
                    }
                    break;

                case 2:

                    if (flagc1 == 0 && flagd == 0)
                    {
                        printf("Enter the char : ");
                        getchar();
                        scanf("%c", (char *)arr + 0);
                        flagc1 = 1;
                    }
                    else if (flagc2 == 0 && flagd == 0)
                    {
                        printf("Enter the char : ");
                        getchar();
                        scanf("%c", (char *)arr + 1);
                        flagc2 = 1;
                    }
                    else
                    {
                        printf("Error : Elements already exists!\n\n");
                    }
                    break;

                case 3:

                    if (flags == 0 && flagd == 0)
                    {
                        printf("Enter the short int : ");
                        scanf("%hd", (short *)arr + 1);
                        flags = 1;
                    }
                    else
                    {
                        printf("Error : Elements already exists!\n\n");
                    }
                    break;

                case 4:

                    if (flagf == 0 && flagi == 0 && flagd == 0)
                    {
                        printf("Enter the float : ");
                        scanf("%f", (float *)arr + 1);
                        flagf = 1;
                    }
                    else
                    {
                        printf("Error : Elements already exists!\n\n");
                    }
                    break;

                case 5:

                    if (flagf == 0 && flagi == 0 && flags == 0 && flagc1 == 0 && flagc2 == 0 && flagd == 0)
                    {
                        printf("Enter the double : ");
                        scanf("%lf", (double *)arr);
                        flagd = 1;
                    }
                    else
                    {
                        printf("Error : Elements already exists!\n\n");
                    }
                    break;

                default:
                    printf("Invalid Input\n");
                    break;
                }
                break;
            }
            case 2:
            {
                int i = 0, index;
                if (flagc1 == 1)
                {
                    printf("%d --> %c (char)\n", i++, *((char *)arr + 0));
                }
                if (flagc2 == 1)
                {
                    printf("%d --> %c (char)\n", i++, *((char *)arr + 1));
                }
                if (flags == 1)
                {
                    printf("%d --> %hx (short)\n", i++, *((short *)arr + 1));
                }
                if (flagi == 1)
                {
                    printf("%d --> %d (int)\n", i++, *((int *)arr + 1));
                }
                if (flagf == 1)
                {
                    printf("%d --> %f (float)\n", i++, *((float *)arr + 1));
                }
                if (flagd == 1)
                {
                    printf("%d --> %lf (double)\n", i++, *((double *)arr + 0));
                }

                if(i == 0)
                {
                    printf("No Elements found to remove\n");
                    break;
                }
                
                printf("Enter the index value to be deleted : ");
                scanf("%d", &index);
                if(index > i)
                {
                    printf("Invalid Input\n");
                    break;
                }
                i = 0;
                if (flagc1 == 1 && index == i++)
                {
                    flagc1 = 0;
                }
                if (flagc2 == 1 && index == i++)
                {
                    flagc2 = 0;
                }
                if (flags == 1 && index == i++)
                {
                    flags = 0;
                }
                if (flagi == 1 && index == i++)
                {
                    flagi = 0;
                }
                if (flagf == 1 && index == i++)
                {
                    flagf = 0;
                }
                if (flagd == 1 && index == i++)
                {
                    flagd = 0;
                }
                
                printf("index %d successfully deleted\n",index);
                break;
            }
            case 3:
            {
                printf("----------------------------------------------------\n");
                int i = 0;
                if (flagc1 == 1)
                {
                    printf("%d --> %c (char)\n", i++, *((char *)arr + 0));
                }
                if (flagc2 == 1)
                {
                    printf("%d --> %c (char)\n", i++, *((char *)arr + 1));
                }
                if (flags == 1)
                {
                    printf("%d --> %hx (short)\n", i++, *((short *)arr + 1));
                }
                if (flagi == 1)
                {
                    printf("%d --> %d (int)\n", i++, *((int *)arr + 1));
                }
                if (flagf == 1)
                {
                    printf("%d --> %f (float)\n", i++, *((float *)arr + 1));
                }
                if (flagd == 1)
                {
                    printf("%d --> %lf (double)\n", i++, *((double *)arr + 0));
                }
                printf("----------------------------------------------------\n");

                break;
            }
        }
    
    } while (choice != 4);
}