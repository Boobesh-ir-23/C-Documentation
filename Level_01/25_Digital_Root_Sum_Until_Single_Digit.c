#include<stdio.h>

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);

    int m,n,p,sum;
    m = x/100;
    n = (x/10)%10;
    p = x%10;

    sum = m+n+p;

    a: if (sum > 9){
        m = sum/10;
        n = sum%10;
        sum = m + n;
        goto a;
    } 
    else{
        printf("The Result is: %d", sum);
    }
}