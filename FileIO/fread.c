#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    int id;
    char name[20];
    float price;
};

int main()
{
    FILE *fp;
    fp = fopen("fwrite.txt", "rb");
    struct book b1;
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    while (fread(&b1, sizeof(b1), 1, fp) > 0)
    {
        printf("%d %s %f\n", b1.id, b1.name, b1.price);
    }
    // fread(&b1,sizeof(b1),1,fp);
    // printf("%d\n%s\n%f\n",b1.id,b1.name,b1.price);
    fclose(fp);
    return 0;
}
