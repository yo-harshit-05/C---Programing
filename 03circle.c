// Program to calculate area and circumference of a circle of user input radius
#include <stdio.h>
#define pi 3.14
int main(){
    float r,c,a;
    printf("Enter Radius To calculate Area and Circumference of circle \n");
    scanf("%f",&r);
    c=2*(pi)*r;
    a=(pi)*r*r;
    printf("Your Circumference is %f\n",c);
    printf("Your Area is %f\n",a);
    return 0;
}