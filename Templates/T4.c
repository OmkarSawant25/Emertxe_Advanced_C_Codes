#include <stdio.h>

int main(){
    float fahrenheit,celsius;
    printf("Enter the number : ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32)*5/9;
    printf("celsius = %f",celsius);
    return 0;
} 
