#include <stdio.h>

int main()
{
    int x = 11;
    int sum = 0;

    loop: if (x < 100){
        if (x/10 == 7){
            sum = sum + x;
        }
        x = x + 2;
        goto loop;
    }
    printf("The sum is %d", sum);
}