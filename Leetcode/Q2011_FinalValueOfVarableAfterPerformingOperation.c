#include <stdio.h>

int finalValueAfterOperations(char** operations, int operationsSize);

int main() {
    char* operations[] = {"--X", "X++", "X++"};
    int operationsSize = 3;

    int result = finalValueAfterOperations(operations, operationsSize);
    printf("Final value: %d\n", result);

    return 0;
}

int finalValueAfterOperations(char** operations, int operationsSize)
{
    int sum = 0;
    
    for(int i = 0; i < operationsSize; i++)
    {
        if((operations[i][0] == '+' && operations[i][1] == '+') ||(operations[i][1] == '+' && operations[i][2] == '+'))
        {
            sum++;
        }
        else
        {
            sum--;
        }
    }
    return sum;
}