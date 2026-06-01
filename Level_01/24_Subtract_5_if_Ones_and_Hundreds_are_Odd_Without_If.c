#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int r,m,n;
    m = (x%10);
    n = (x/100);
    r = ((m%2)*(n%2)) * 5;
    y = x - r;
    printf("Result = %d", y);
}