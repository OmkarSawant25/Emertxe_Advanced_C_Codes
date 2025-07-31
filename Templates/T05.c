#include <stdio.h>

int main(){
    int fahrenheit;
    float celsius;
    
    scanf("%d",&fahrenheit);
    celsius = (fahrenheit - 32) * 5.0/9.0;
    printf("%f",celsius);
    return 0;
}
