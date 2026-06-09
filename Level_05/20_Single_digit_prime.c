#include <stdio.h>

int main()
{
    int fact = 0;
    int prime = 0;
    for (int i = 2; i < 10; i++){
        fact = 0;
        for (int j = 2; j < i;j++){
            if (i%j == 0){
                fact = 1;
                j = i;
            }
        }
        if (fact == 0){
            prime++;
        }
    }
    printf("Single digit prime numbers: %d", prime);


}