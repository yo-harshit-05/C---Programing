// Program : To calculate area of triangle
#include<stdio.h>
void main(){
    float base, height,area;
    printf("Enter the value for height\n");
    scanf("%f",&height);
    printf("Enter the values for base\n");
    scanf("%f",&base);
    area=0.5*base*height;
    printf("The area of the triangle is\n%.2f",area);
