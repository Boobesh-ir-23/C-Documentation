#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter your number: ");
    scanf("%d", &x);

    z = x/10;
    y = z%10;

    printf("Result = %d", y);
}