#include <stdio.h>

int main()
{
    int x,y;
    int sum = 0;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = x;

    loop: if (x > 0){
        sum = (sum*10) + (x%10);
        x = x/10;
        goto loop;
    }
    printf("Reversed number: %d", sum);
}