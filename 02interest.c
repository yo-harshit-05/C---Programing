// Program to calculate simple and compoud interest 

// Simple Interest
#include <stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter Principle Amount\n");
    scanf("%f",&p);
    printf("Enter Rate of Interest\n");
    scanf("%f",&r);
    printf("Enter Time Period\n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The simple Interest Obtained is \n%f",si);
    return 0;
}

//Compund Interest

#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,ci;
    printf("Enter Principle Amount\n");
    scanf("%f",&p);
    printf("Enter Rate of Interest\n");
    scanf("%f",&r);
    printf("Enter Time Period\n");
    scanf("%f",&t);
    ci=p*pow((1+r/100),t)-p;
    printf("The Compound Interest Obtained is \n%f",ci);
    return 0;
}
