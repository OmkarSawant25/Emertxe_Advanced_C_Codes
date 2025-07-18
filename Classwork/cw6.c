#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int rem = 0;
    int result = 0;
    int num1 = num;
    
    while(num!=0){
        rem = num%10;
        result = result*10 + rem;
        num=num/10;
    }
    if(num1 == result){
        printf("The Entered number is an palindrome.");
    }
    else{
        printf("The Entered number is not an palindrome.");
    }
}
