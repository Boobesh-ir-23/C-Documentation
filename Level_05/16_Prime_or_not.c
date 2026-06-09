#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int fact = 0;

    for (int i = 2; i < x; i++){
        if (x%i == 0){
            fact = 1;
            i = x;
        }
    }

    if (fact == 1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}