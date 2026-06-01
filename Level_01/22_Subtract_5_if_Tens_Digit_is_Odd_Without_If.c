#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int r,m;
    m = x/10;
    r = m%2;
    y = x - (r*5);
    printf("Result = %d", y);
}