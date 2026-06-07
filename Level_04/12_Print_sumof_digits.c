#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
    printf("Enter your number: ");
    scanf("%d", &x);

    loop: if(x > 0){
        sum = sum + (x%10);
        x = x/10;
        goto loop;
    }
    printf("The sum of digits: %d", sum);
}