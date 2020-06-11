//Simple Interest
#include<stdio.h>
int main(){
    float p,r,n,si;
    printf("Enter value of Principle,Rate and Time");
    scanf("%f%f%f",&p,&r,&n);
    si=p*r*n/100;
    printf("The required Simple Intrest is %f",si);
    return 0;
}
