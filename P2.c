//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main(){
    int a,b,sum,pro,diff,qt;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    pro=a*b;
    diff=a-b;
    printf("sum=%d\n",sum);
    printf("product=%d\n",pro);
    printf("diff=%d\n",diff);
    if(b!=0){
        qt=a/b;
        printf("quotient=%d\n",qt);
    }
    else{
        printf("division by zero is not allowed\n");
    }
    
}
