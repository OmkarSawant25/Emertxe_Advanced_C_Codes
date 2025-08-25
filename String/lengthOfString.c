// ● WAP to calculate length of the string

#include <stdio.h>
int length(char *s){
    int len = 0;
    while(*s != 0){
        len++;
        s++;
    }
    return len;
}
int main(){
    char str[20];
    printf("Enter the character : ");
    scanf("%s", str);
    int res = length(str);
    printf("The length of %s is %d\n",str,res);
}