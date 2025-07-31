#include <stdio.h>

int main(){
    int x;
    printf("Enter max lines: ");
    scanf("%d",&x);
    char ch = 'A';
    
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
