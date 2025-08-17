/*WAP to check if the system is little or big endian  */

#include <stdio.h>
int main()
{
    int num = 0x12345678;
    char *ptr = (char *)&num;
    if (*ptr == 0x78)
        printf("Ours is a little endian\n");
    else
        printf("Ours is a big endian\n");
    return 0;
}
