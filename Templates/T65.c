/* 
T65 - Practice Complement Operator
    Find the complement of given numbers and print them in decimal and hexadecimal
    When dealing with bitwise operators, representing the number in hexadecimal make it easy to interpret their binary values. This is recommended.
    Use %X format to print a number in hexadecimal format
Find complement for following values of num:
    -5
    25
    -112
    0xAB
    -1
    0
*/

#include <stdio.h>

int main()
{
    int num;
    num = -5;
    printf("num = %d\t~num = %d\thex = %X\n", num, ~num, ~num);
    num = 25;
    printf("num = %d\t~num = %d\thex = %X\n", num, ~num, ~num);
    num = -112;
    printf("num = %d\t~num = %d\thex = %X\n", num, ~num, ~num);
    num = 0xAB;
    printf("num = %d\t~num = %d\thex = %X\n", num, ~num, ~num);
    num = -1;
    printf("num = %d\t~num = %d\thex = %X\n", num, ~num, ~num);
    num = 0;
    printf("num = %d \t~num = %d\thex = %X\n", num, ~num, ~num);
}