#include <stdio.h>

int main(){
    float principal_amount,rate_of_interest;
    int time;
    scanf("%f %f %d",&principal_amount,&rate_of_interest,&time);
    float SI = (principal_amount*rate_of_interest*time)/100;
    printf("%g",SI);
    return 0;
}
