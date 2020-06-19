//Flipped Inverted Isosceles triangle pattern(*)
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
