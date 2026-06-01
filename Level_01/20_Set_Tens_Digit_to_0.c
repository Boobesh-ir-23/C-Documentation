#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf ("%d", &x);

    int m;
    m = (x/10)%10;
    y = x - (m*10);
    printf("The result is: %d", y); 
}