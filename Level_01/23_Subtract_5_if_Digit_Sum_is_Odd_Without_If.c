#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int r,m;
    m = (x%10) + (x/10);
    r = (m%2) * 5;
    y = x - r;

    printf("Result = %d", y);
}