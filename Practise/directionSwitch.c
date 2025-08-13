#include <stdio.h>

int main()
{
    char dir;
    printf("Enter the direction : ");
    scanf("%c", &dir);
    if (dir >= 'A' && dir <= 'Z')
    {
        dir = dir + 32;
    }
    switch (dir)
    {
    case 'n':
        printf("The Direction is North\n");
        break;
    case 's':
        printf("The Direction is South\n");
        break;
    case 'e':
        printf("The Direction is East\n");
        break;
    case 'w':
        printf("The Direction is West\n");
        break;
    default:
        printf("Invalid Direction\n");
        break;
    }

    return 0;
}
