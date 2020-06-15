//Eligibility For Marriage
#include<stdio.h>
int main(){
    int age;
    char MaritalStatus,Gender;
    printf("Enter Marital Status, Gender, Age(e.g. m,f,25)");
    scanf("%c %c %d",&MaritalStatus,&Gender,&age);
    if(MaritalStatus=='m')
    {
        printf("You can't marry");
    }
    else if(MaritalStatus=='u')
    {
        if(Gender=='m')
        {
            if(age>=21)
                printf("You can marry");
            else
                printf("You can't marry");
        }
        else if(Gender=='f')
        {
            if(age>=18)
                printf("You can marry");
            else
                ("You can't marry");
        }
        else
            printf("Invalid input Gender");
    }
    else
        printf("Invalid input Maritial Status");
    return 0;

}
