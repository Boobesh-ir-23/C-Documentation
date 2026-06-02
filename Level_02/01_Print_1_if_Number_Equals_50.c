#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = (x==50);
    printf("Result = %d", y);
}