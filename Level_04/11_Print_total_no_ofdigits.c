#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
    printf("Enter youn number: ");
    scanf("%d", &x);

    loop: if (x > 0){
        sum++;
        x = x/10;
        goto loop;
    }
    printf("Number of digits: %d", sum);
}