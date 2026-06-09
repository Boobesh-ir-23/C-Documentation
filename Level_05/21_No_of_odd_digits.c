#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int odd = 0;

    for (int i = 1; i < 20;i++){
        if (x > 0) {
            if ((x%10)%2 == 1){
            odd++;
        }
        x = x/10;
        }
    }
    printf("No.of odd digits: %d", odd);
}