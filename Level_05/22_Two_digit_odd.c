#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int odd = 0;

    for (int i = 1; i < 20; i++){
        if (x > 9){
            if ((x%100)%2 == 1){
                odd++;
            }
            x = x/10;
        }
    }
    printf("Two digit odd numbers: %d", odd);
}