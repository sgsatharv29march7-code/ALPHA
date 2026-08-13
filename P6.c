//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main(){
    int a,b,sw;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sw=a;
    a=b;
    b=sw;
    printf("after swap a=%d and b=%d",a,b);
    return 0;
}