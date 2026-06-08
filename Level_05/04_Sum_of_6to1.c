#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 6; i >=1; i--){
        sum = sum + i;
    }
    printf("The sum is: %d", sum);
}