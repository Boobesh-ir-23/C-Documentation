#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int y = (x/10)%100;
    int fact = 0;

    for (int i = 2; i < y; i++){
        if (y%i == 0){
            fact = 1;
            i = y;
        }
    }

    if (fact == 0){
        printf("Prime");
    } else {
        printf("Not a Prime");
    }
}