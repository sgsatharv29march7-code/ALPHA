//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0){
        printf("number is positive%d",num);
    }
    else{
        if(num<0){
            printf("number is negative %d",num);
        }
        else{
            printf("number is zero %d",num);
        }
    }
    return 0;
}