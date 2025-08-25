#include <stdio.h>
int length(char *s);
void reverse(char *s, int n);
int main(){
    char str[20];
    printf("Enter the character : ");
    scanf("%s", str);
    int len = length(str);
    reverse(str, len);
    printf("Reversed String is %s\n",str);
}
void reverse(char *s, int n)
{
   for(int i = 0; i < n/2; i++)
   {
        int temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
   }
}

int length(char *s){
    int len = 0;
    while(*s != 0){
        len++;
        s++;
    }
    return len;
}
