#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = (x/10) + (x%10);
    printf("The Result is: %d ",y);
}