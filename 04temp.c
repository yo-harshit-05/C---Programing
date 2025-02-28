// Program to transform temperature in celsis to farenheit 
#include <stdio.h>
int main(){
    float c,f;
    printf("Enter the Celsius Temperature \n");
    scanf("%f",&c);
    f=(9*c)/5+32;
    printf("Fahrenheit Temperature is \n %f",f);
    return 0;
}
// Program to transform temperature in celsis to farenheit using function
#include<stdio.h>
float temp(float c){
    float f;
    f=(9*c)/5+32;
    printf("Fahrenheit Temperature is \n %f",f);
    return f;
}
int main(){
    float c;
    printf("Enter the celsius value\n");
    scanf("%f",&c);
    temp(c);
}
