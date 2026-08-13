//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
    int l,b,area,perimeter;
    printf("enter length and breadth of rectangle");
    scanf("%d%d",&l,&b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("area = %d\n",area);
    printf("perimeter = %d\n",perimeter);
    return 0;
}