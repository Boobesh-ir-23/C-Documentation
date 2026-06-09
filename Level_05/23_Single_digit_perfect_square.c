#include <stdio.h>

int main()
{
    int x,temp;
    printf("Enter your number: ");
    scanf("%d", &x);

    int square = 0;

    for (int i = 1; i < 20; i++){
        if (x > 0){
            temp = x%10;
            if (temp== 1 || temp == 4 || temp == 9){
                square++;
            }
            x = x/10;
        }
    }
    printf("Single digit perfect square numbers: %d", square);
}