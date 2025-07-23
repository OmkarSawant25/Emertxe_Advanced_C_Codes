#include <stdio.h>

int main()
{
    int flag = 0;
    for (int i = 0; i <= 5; i++)
    {
        for(int j = 0; j <= 5; j++)
        {
            if(i == 4 && j == 3)
            {
                printf("Found the loop");
                flag = 1;
                break;
            }
        }
        if(flag == 1) 
        {
            break;
        }
    }
    return 0;
}
