// Program : To swap number using temp
#include<stdio.h>
void main(){
    int a,b,temp;
    printf("Enter value for a\n");
    scanf("%d",&a);
    printf("Enter values for b\n");
    scanf("%d",&b);
    printf("The numbers before swapping is\na=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The numbers after swapping is\na=%d,b=%d",a,b);
