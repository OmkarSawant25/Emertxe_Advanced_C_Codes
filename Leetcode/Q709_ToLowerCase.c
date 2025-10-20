#include <stdio.h>
#include <ctype.h>

char* toLowerCase(char* s);

int main()
{
    char str[] = "HeLLo WoRLd!";
    toLowerCase(str);
    printf("Lowercase string: %s\n", str);
    return 0;
}

char* toLowerCase(char* s) {
    char *p = s;
    while(*p != '\0'){
        if(isupper(*p)) 
            *p = tolower(*p);
        p++;
    }
    return s;
}