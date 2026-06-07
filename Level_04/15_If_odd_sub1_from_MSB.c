#include <stdio.h>

int main(){
    int x,y;
    int z = 1;
    printf("Enter your number: ");
    scanf("%d", &x);

    y = x;

    if (x%2 == 1){
        loop: if(y > 9){
            y = y/10;
            z = z * 10;
            goto loop;
        }
        printf("Check 1 %d\n", y);
        printf("Check 2 %d\n", z);
        x = x - z;
    }
    printf("The Result is: %d",x);
}