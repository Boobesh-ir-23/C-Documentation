#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int fact = 0;

    int n = 2;
    loop: if (x > n){
        if(x%n == 0){
            printf("Not a prime");
            fact++;
            n = x;
        }
        else{
            n++;
            goto loop;
        }
    }

    if (fact == 0){
        printf("Prime number");
    }
}