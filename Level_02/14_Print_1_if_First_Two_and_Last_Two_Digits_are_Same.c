#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = ((x/100) == (x%100));

    printf("The Result: %d", y);
}