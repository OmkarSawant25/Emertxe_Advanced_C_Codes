#include <stdio.h>

int main()
{
    for(int i = 0; i <= 5; i++)
    {
        if(i == 3)
        {
            printf("Found 3\n");
            break;
        }
    }    
    return 0;
}
