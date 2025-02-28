// Program to find reverse of a function using function
#include<stdio.h>
void rev(int num){
    int rev,a,r;
    a=num;
    rev=0;
    while (a>0) 
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("The reverse of number is %d \n",rev);
    
}
void main(){
    int num,i;
    printf("Enter number whose you want to find reverse\n");
    scanf("%d",&num);
    rev(num);
}