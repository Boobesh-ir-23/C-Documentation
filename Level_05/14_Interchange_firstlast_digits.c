#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the number: ");
    scanf("%d", &x);

    int a = x;
    int sum = 1;
    y = x%10;

    for (int i = 1; i < 20; i++){
        x = x/10;
        if (x > 9){
            sum = sum * 10;
        }
        else {
            i = 20;
        }
    }
    a = a - y - (x*sum*10) + x + (y*sum*10);

    printf ("The Result is: %d", a);
}