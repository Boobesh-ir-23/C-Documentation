#include <stdio.h>

int main()
{
    int x,y;

    for (int i = 10; i < 100; i++){
        x = i/10;
        y = i%10;

        if ((x+y) == 6){
            printf("%d \n", i);
        }

        x = 0;
        y = 0;
        i++;
    }
}