// Program 11 : To Check Leap Year
#include<stdio.h>
void main(){
    int year;
    printf("Enter Year\n");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("The given year is a leap year\n");

    }
    else
    {
        printf("The given year is not a leap year\n");
    }

}
