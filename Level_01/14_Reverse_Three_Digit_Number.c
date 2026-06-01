#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the number: ");
    scanf("%d", &x);

    int a,b,c;
    a = x%10;
    b = x/100;
    c = (x/10)%10;

    y = (a*100) + (c*10) + b;

    printf("Result = %d", y);
}