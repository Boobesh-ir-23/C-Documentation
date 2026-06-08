#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 15; i < 100; i+=10){
        sum = sum + i;
    }
    printf("The sum is: %d", sum);
}