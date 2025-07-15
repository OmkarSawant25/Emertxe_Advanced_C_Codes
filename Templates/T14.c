#include <stdio.h>

int main(){
    int x;
    
    printf("Enter the score: ");
    scanf("%d",&x);
    
    if(90<=x && x<=100){
        printf("Your grade is A\n");
    }
    else if(80<=x && x<=89){
        printf("Your grade is B\n");
    }
    else if(70<=x && x<=79){
        printf("Your grade is C\n");
    }
    else if(60<=x && x<=69){
        printf("Your grade is D\n");
    }
    else{
        printf("Your grade is F\n");
    }
    return 0;
}
