#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    int vote = age >= 18 ? 1 : 0;
    if (vote)
    {  
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
    return 0;   
}