#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    if(x == 0){
        printf("The number is zero\n");
    }
    else if(x>0){
        if(x%2 == 0){
            printf("The number %d is positive and even.",x);
        }
        else{
            printf("The number %d is positive and odd.",x);
        }
    }
    else{
        if(x%2 == 0){
            printf("The number %d is negative and even.",x);
        }
        else{
            printf("The number %d is negative and odd.",x);
        }
    }
    return 0;
}
