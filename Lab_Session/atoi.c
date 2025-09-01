#include <stdio.h>
int my_atoi(const char []);
int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}
int my_atoi(const char str[])
{
    int i = 0;
    int num = 0;
    if(str[i] == '+' || str[i] == '-')
    {
        i++;
    }
    // while(str[i] != '\0')
    // {
        while(str[i] >= 48 && str[i] <= 57)
        {
            int integer = str[i] - 48;
            num = num * 10 + integer;
            i++; 
        }
        // else if (i == 0)
        // {
            // if(str[i] == '+' || str[i] == '-')
            // {
            //     i++;
            //     continue;
            // }
        // }
        // else
        // {
        //     break;
        // }
        
    // }
    if(str[0] == '-')
    {
        return num * (-1); 
    }
    else
        return num;
}