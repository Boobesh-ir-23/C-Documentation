#include <stdio.h>

int main()
{
    int sum;

    for (int i = 1; i < 6; i++){
        sum = sum + i;
    }
    printf("The Sum is: %d", sum);
}