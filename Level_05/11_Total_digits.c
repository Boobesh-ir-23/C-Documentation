#include <stdio.h>

int main()
{
    int x;
    int j = 0;
    printf("Enter your number: ");
    scanf("%d",&x);

    for(int i = 1; i < 20; i++){
        if (x < 10){
            j = i;
            i = 20;
        }
        x = x/10;
    }
    printf("No.of digits of the given number: %d", j);
}