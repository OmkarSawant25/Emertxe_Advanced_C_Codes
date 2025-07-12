#include <stdio.h>

int main(){
	char ch1 = 'A';
	printf("%hhd\n",ch1);	//65
	printf("%c\n",ch1);	//A
	
	char ch2 = 65;
	printf("%c\n",ch2);

	int x = 'A';
	printf("%c\n",x);	//A
	printf("%d\n",x);	//65	

	char c = '0';
	printf("%c\n",c);	//0
	printf("%hhd\n",c); 	//48

}

