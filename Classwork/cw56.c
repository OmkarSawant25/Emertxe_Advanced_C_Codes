/*
Implement strdup

Instruction : 
char *my_strdup()
{
	//allocate the memory dynamically according to the length of the string
	//copy the string to this new memory
	//return the address of new memory
}
int main()
{
	//read a string from the user
	call my strdup by passing the string
	char *cptr = my_strdup(pass string);// cptr will have the address stored in heap segment
	//print the string available in heap segment
	free the memory
	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char *c)
{
    char *newString = malloc(sizeof(char) * 30);
    char *ptr = newString;
    while (*c != '\0')
    {
        *ptr = *c;
        c++;
        ptr++;
    }
    *ptr = '\0';
    return newString;
}

int main()
{
    char str[50];
    // printf("Enter the string : ");
    scanf("%[^\n]", str);
    char *cptr = my_strdup(str);
    printf("%s\n", cptr);
}