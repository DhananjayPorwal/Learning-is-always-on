//Compare Numbers
#include<stdio.h>
int main(){
  int a,b;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  if(a>b)
        printf("Here, A is greater than B",a,b);
  else if(a<b)
        printf("Here, B is greater than A",a,b);
  else
        printf("Both are equal numbers");
        return 0;
}
