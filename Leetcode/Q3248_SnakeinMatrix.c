#include <stdio.h>
#include <string.h>

int finalPositionOfSnake(int n, char **commands, int commandsSize);

int main()
{
    int n;
    scanf("%d", &n);

    int commandsSize;
    scanf("%d", &commandsSize);

    char commandsArr[commandsSize][10]; // store commands
    char *commands[commandsSize];       // array of char* for function

    for (int i = 0; i < commandsSize; i++)
    {
        scanf("%s", commandsArr[i]);
        commands[i] = commandsArr[i]; // point to each string
    }

    int finalPos = finalPositionOfSnake(n, commands, commandsSize);

    printf("%d\n", finalPos);

    return 0;
}

int finalPositionOfSnake(int n, char **commands, int commandsSize)
{
    int pos = 0;
    int row = 0, col = 0;
    for (int i = 0; i < commandsSize; i++)
    {
        if (strcmp(commands[i], "RIGHT") == 0)
        {
            col++;
            continue;
        }
        else if (strcmp(commands[i], "LEFT") == 0)
        {
            col--;
            continue;
        }
        else if (strcmp(commands[i], "UP") == 0)
        {
            row--;
            continue;
        }
        else if (strcmp(commands[i], "DOWN") == 0)
        {
            row++;
            continue;
        }
    }
    return (row * n) + col;
}
