#include <stdio.h>

int main()
{
	char str1[20];
    scanf("%[^\n]",str1);       //reads untill newline
    printf("Entered : %s\n",str1);

    return 0;
}
