#include<stdio.h>
#include<string.h>
struct Student
{
	int id;
	char name[20];
	char address[40];
};

int main()
{
	struct Student s1;
	scanf("%d", &s1.id);
	scanf("%s", s1.address);
	scanf("%s", s1.name);

	printf("s1 %d\n", s1.id);
	printf("s1 %s\n", s1.address);
	printf("s1 %s\n", s1.name);

	struct Student s2;
	struct Student *ptr = &s2;
	ptr->id = 30;
	strcpy(ptr->name ,"Omkar");
	strcpy(ptr->address ,"Mumbai");

	printf("s2 %d\n", ptr->id);
	printf("s2 %s\n", ptr->name);
	printf("s2 %s\n", ptr->address);

	return 0;
}
