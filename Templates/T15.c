#include<stdio.h>

int main()
{
    int x;
    printf("Age= ");
    scanf("%d",&x);
    
    if(x<5)
    {
        printf("Children under 5 years old get in free!\nTicket price:Rs 0.00");
    }
    else if(x>=5&&x<=12)
    {
        printf("Ticket price:Rs 50.00");
    }
    else if(x>=65)
    {
        printf("Ticket price:Rs 80.00");
    }
    else
    {
        printf("Ticket price:Rs 100.00");
    }
    return 0;
}

/* 
#include<stdio.h>
int main(){
    int age;
    float ticket = 100.00;
    printf("age = ");
    scanf("%d",&age);
    
    if(age<5){
        printf("Children under 5 years old get in free!\nTicket price:Rs. %.2f",ticket-100);
    }else if(age>=5 && age<12){
        printf("Ticket price:Rs. %.2f",ticket-50);
    }else if(age>=65){
        printf("Ticket price:Rs. %.2f",ticket-20);
    }else{
        printf("Ticket price:Rs. %.2f",ticket);
    }
}
*/
