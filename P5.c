//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main(){
    float ce,fe;
    printf("enter temperature in celsius");
    scanf("%f",&ce);
    fe = (ce*9/5)+32;
    printf("temperature in fahrenheit = %.2f",fe);
    return 0;
}