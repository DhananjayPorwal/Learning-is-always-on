//Roots of Quadratic Equation
#include<stdio.h>
int main(){
    float x,r1,r2,a,b,c;
    printf("Enter the values of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    x=b*b-4*a*c;
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if(x>0)
        printf("\nRoots are unequal\n");
    else if(x<0)
        printf("\nRoots are imaginary\n");
    else
        printf("\nRoots are equal\n");
    printf("R1=%f and R2=%f",r1,r2);
    return 0;

}
