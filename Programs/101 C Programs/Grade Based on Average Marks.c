//Grade Based on Average Marks
#include<stdio.h>
int main(){
    int RollNumber,m1,m2,m3,total;
    float avg;
    printf("Enter Roll Number :");
    scanf("%d",&RollNumber);
    printf("Enter marks of three subjects:");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("Total : %d",total);
    printf("Average : %f",avg);
    if(avg>=80)
        printf("\nGrade : A\n");
    else if((avg>=60)&&(avg<80))
        printf("\nGrade : B\n");
    else if((avg>=40)&&(avg<60))
        printf("\nGrade : C\n");
    else if((avg>=33)&&(avg<40))
        printf("\nGrade : D\n");
    else
        printf("\nGrade : F\n");
    return 0;
}
