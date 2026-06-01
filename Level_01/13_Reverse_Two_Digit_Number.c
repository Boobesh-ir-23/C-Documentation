#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number = ");
    scanf("%d", &x);

    int a,b;
    a = x%10;
    b = x/10;
    y = (a*10) + b;

    printf("Result = %d", y);
}