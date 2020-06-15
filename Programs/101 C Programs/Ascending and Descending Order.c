//Ascending and Descending Order
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        if(b>=c)
            {
            printf("\nDescending order is %d,%d,%d",a,b,c);
            printf("\nAscending order is %d,%d,%d",c,b,a);
            }
        else
        {
            printf("\nDescending order is %d,%d,%d",a,b,c);
            printf("\nAscending order is %d,%d,%d",b,c,a);
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
            {
            printf("\nDescending order is %d,%d,%d",b,a,c);
            printf("\nAscending order is %d,%d,%d",c,a,b);
            }
        else
        {
            printf("\nDescending order is %d,%d,%d",b,a,c);
            printf("\nAscending order is %d,%d,%d",a,c,b);
        }
    }
    else if((c>=b)&&(c>=c))
    {
        if(a>=b)
            {
            printf("\nDescending order is %d,%d,%d",c,a,b);
            printf("\nAscending order is %d,%d,%d",b,a,c);
            }
        else
        {
            printf("\nDescending order is %d,%d,%d",c,b,a);
            printf("\nAscending order is %d,%d,%d",a,b,c);
        }
    }
    return 0;

}
