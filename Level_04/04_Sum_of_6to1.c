#include <stdio.h>

int main()
{
    int x = 6;
    int sum = 0;

    loop: if (x > 0){
        sum = sum + x;
        x--;
        goto loop;
    }
    printf("The sum is: %d", sum);
}