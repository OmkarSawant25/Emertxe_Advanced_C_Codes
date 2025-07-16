#include <stdio.h>

int main()
{
    char a;
    printf("Enter direction: ");
    scanf("%c",&a);
    
    if(a == 'N' || a == 'S' || a == 'E' || a == 'W' )
    {
        a = a + 32;
    }
    
    switch (a)
    {
        case 'n':
            printf("North");
            break;
        
        case 's':
            printf("South");
            break;
            
        case 'w':
            printf("West");
            break;
            
        case 'e':
            printf("East");
            break;
            
        default:
            printf("Invalid input");
            break;
            
    }
}
