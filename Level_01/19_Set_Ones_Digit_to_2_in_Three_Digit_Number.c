#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = x - (x%10) + 2;
    printf("Result = %d", y);
}