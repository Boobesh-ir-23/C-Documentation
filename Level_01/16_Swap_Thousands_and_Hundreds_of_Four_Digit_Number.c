#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int m,n,p;
    m = x/1000;
    n = (x/100)%10;
    p = x%100;

    y = (n*1000) + (m*100) + p;
    printf("The Result is:%d ", y);
}