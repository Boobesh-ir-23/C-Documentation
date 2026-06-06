#include <stdio.h>

int main()
{
    int x = 1;
    
    loop: if (x < 10){
        if (x%2 == 1){
            printf("%d \n", x);
        }
        x++;
        goto loop;
    }
}