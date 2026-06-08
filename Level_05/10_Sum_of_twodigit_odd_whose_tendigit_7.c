#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 71; i < 80; i+=2){
        sum = sum + i;
    }
    printf("The sum is: %d", sum);
}