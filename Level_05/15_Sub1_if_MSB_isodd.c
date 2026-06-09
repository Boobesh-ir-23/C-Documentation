#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter your number: ");
    scanf("%d", &x);

    int a = x;
    int sum = 1;


    if (x%2 == 1){
        for (int i = 1; i < 20; i++){
            x = x/10;

            if (x > 9){
                sum = sum * 10;
            }
            else{
                i = 20;
            }
        }
        a = a - (sum*10);
        printf("The result: %d", a);
    }
    else {
        printf("The result: %d", a);
    }
}