#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int a,b,c;
    a = x%10;
    b = (x/10)%10;
    c = x - ((b*10) + a);
    y = c + (a*10) + b;

    printf("Result = %d", y);
}