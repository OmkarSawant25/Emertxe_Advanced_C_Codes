#include <stdio.h>

int main(){
    int a,b,c,mid;
    printf("Enter the Three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b){
        if(a<c){
            mid = a;
        }
        else{
            if(b>c){
                mid = b;
            }
            else{
                mid = c;
            }
        }
    }
    else{
        if(a>c){
            mid = a;
        }
        else{
            if(b<c){
                mid = b;
            }
            else{
                mid = c;
            }
        }
    }
    printf("The middle number is %d \n",mid);
    return 0;
}
