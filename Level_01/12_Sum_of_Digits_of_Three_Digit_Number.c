#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int a,b,c;
    a = x%100;
    b = x/100;
    c = x/10;

    y = a + b + (c%10);
    printf("Result = ", y);
}