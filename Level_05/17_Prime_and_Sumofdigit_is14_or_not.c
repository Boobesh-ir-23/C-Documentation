#include <stdio.h>
int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int y = x;
    int sum = 0;
    int fact = 0;

    for (int i = 1; i < 20; i++){
        if (y > 0){
            sum = sum + (y%10);
            y = y/10;
        }
        else {
            i = 20;
        }
    }

    for (int j = 2; j < x; j++){
        if (x%j == 0){
            fact = 1;
            j = x;
        }
    }

    if (sum == 14 && fact == 0){
        printf("Prime and sum of digits is 14");
    } else if (sum == 14 && fact == 1){
        printf("Not Prime but sum of digits is  14");
    } else if (fact == 0 && sum != 14){
        printf("Prime but sum of digits is not 14");
    } else {
        printf("Not Prime and Sum of Digits is also not 14");
    }
}