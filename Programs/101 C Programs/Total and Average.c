//Total and Average
#include<stdio.h>
int main(){
    int m1,m2,m3,total;
    float avg;
    printf("Enter marks of three subjects");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("The Average marks of student is %f",avg);
    return 0;
}
