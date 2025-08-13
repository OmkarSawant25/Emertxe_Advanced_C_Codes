/*WAP to generate the prime series upto the given limit using functions*/

#include <stdio.h>

int is_prime(int);
void generate_prime(int);

int main()
{
    int limit;

    // printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit > 1)
    {
        generate_prime(limit);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}

void generate_prime(int a)
{
    for (int i = 2; i <= a; i++)
    {
        int count = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (is_prime(count))
            printf("%d ", i);
    }
}

int is_prime(int c)
{
    if (c == 0)
        return 1;
    else
        return 0;
}

/*---------------------------------------------------------------------------------------------------------------*/
// #include <stdio.h>

// int is_prime(int);

// void generate_prime(int);

// int main()
// {
//     int limit;

//     //printf("Enter the limit: ");
//     scanf("%d", &limit);

//     if (limit > 1)
//     {
//         generate_prime(limit);
//     }
//     else
//     {
//         printf("Invalid input\n");
//     }

//     return 0;
// }

// void generate_prime(int n){

//     for(int i=2;i<=n;i++){
//         if(is_prime(i)){
//             printf("%d ",i);
//         }
//     }
// }

// int is_prime(int n){
//     int count = 0;
//         for(int j=2;j<=n/2;j++){
//             if(n%j==0){
//                 count++;
//                 break;
//             }
//         }
//     if(count==0){
//         return 1;
//     }else{
//         return 0;
//     }
// }