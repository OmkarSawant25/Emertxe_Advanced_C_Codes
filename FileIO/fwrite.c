#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
    int id;
    char name[20];
    float price;
};

int main()
{
    FILE *fp;
    fp = fopen("fwrite.txt","ab");
    struct book b1;
    printf("Enter BookId, name & price\n");
    scanf("%d", &b1.id);
    getchar(); 
    gets(b1.name); 
    getchar(); 
    scanf("%f", &b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
	return 0;
}
