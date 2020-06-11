//Square and Cube
#include<stdio.h>
int main(){
    float n,square,cube;
    printf("Enter the value");
    scanf("%f",&n);
    square=n*n;
    cube=n*n*n;
    printf("The Square and cube of %f is %f and %f",n,square,cube);
    return 0;
}
