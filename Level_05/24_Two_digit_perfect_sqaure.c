#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int temp;
    int square = 0;

    for (int i = 1; i < 20; i++){
        if (x > 10){
            temp = x%100;
            for (int j = 1; j < 10;j++){
                if (j*j == temp){
                    square++;
                    j = 10;
                }
            }
            x = x/10;
        }
    }
    printf("Output: %d", square);
}