#include <stdio.h>

int main(){
    int time;
    printf("Enter the hour (0-23): ");
    scanf("%d",&time);
    
    if(time>=5 && time<=11){
        printf("Good morning!\n");
    }
    else if(time>=12 && time<=15){
        printf("Good afternoon!\n");
    }
    else if(time>=16 && time<=21){
        printf("Good evening!\n");
    }
    else if(time>23){
        printf("Invalid hour!\n");
    }
    else{
        printf("Good night!\n");
    }
    
}
