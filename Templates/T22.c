#include <stdio.h>

int main()
{
    int x = 1;
    
    for( x = 1 ; x <= 100 ;x++)
    {
        if(x % 2 == 1)
        {
            printf("%d ",x);
        }
    }
}
