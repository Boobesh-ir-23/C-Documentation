#include <stdio.h>

int main()
{
    int x,y,z;
    int dig = 1;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = x;
    z = x%10;
    y = y - z;

    loop: if (x > 9){
        x = x/10;
        dig = dig*10;
        goto loop;
    }

    y = y - (x*dig);
    y = y + x + (z*dig);
    printf("The Result is: %d", y);
}