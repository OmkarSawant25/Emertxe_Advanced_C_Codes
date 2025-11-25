#include <stdio.h>

int findHCF(int a, int b);   // Function prototype

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int h = findHCF(a, b);
    printf("HCF is %d\n", h);

    return 0;
}

// int min(int a, int b)
// {
//     if(a < b) return a;
//     return b;
// }

// int findHCF(int a, int b)
// {
//     int mini = min(a,b);
//     for(int i = mini; i > 0; i--)
//     {
//         if(a % i == 0 && b % i == 0)
//             return i;
//     }
// }

int findHCF(int a, int b)
{
    while(a > 0 && b > 0)
    {
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) return b;
    else return a;
}