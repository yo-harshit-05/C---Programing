// Program 9 :To check weather a number is positive negative or zero
#include<stdio.h>
void main(){
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if (num>0)
    {
        printf("The given number is positive\n");
    }
    else if (num<0)
    printf("The given number is negative\n");
    else
    printf("The given number is zero\n");
