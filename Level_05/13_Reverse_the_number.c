#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);

    for (int i = 1; i < 20; i++){
        sum = (sum + (x%10)) * 10;
        x = x/10;

        if (x < 10){
            sum = sum + x;
            i = 20;
        }
    }
    printf("Output: %d", sum);
}