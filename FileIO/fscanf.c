#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("f1.txt", "r");
    int a, b, c;
    fscanf(fp, "%d%d%d", &a, &b, &c);
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    fclose(fp);
    return 0;
}

// when we are keeeping it in writing mode then we were getting garbage value
// 
