/*
CW46 - Count set bits
WAP to count the number of set bits in the entered number.
Read the number from the user and count the number of set bits in it.
Eg:
Enter the number in Hexadecimal format: F2A
Number of set bit is : 7
*/
#include <stdio.h>

int main()
{
    unsigned int num;
    printf("Enter the number : ");
    scanf("%x", &num);
    int count = 0;
    while (num > 1)
    {
        if (num & 1)
        {
            count++;
        }
        num = (num >> 1);
    }
    if (num == 1)
    {
        count++;
    }
    printf("Number of set bits = %d\n", count);
}