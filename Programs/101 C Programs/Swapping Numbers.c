//Swapping Of Two Numbers Using Third Variable
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Numbers");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping a=%d and b=%d",a,b);
    return 0;
}
