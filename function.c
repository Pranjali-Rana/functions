#include <stdio.h>
int sum();
int main(){
    printf("\n going to calculate sum");
    sum();
    return 0;
}
int sum(){
    int a,b;
    printf("\n enter two numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("the sum is %d",a+b);
    return 0;
}