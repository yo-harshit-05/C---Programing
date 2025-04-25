//Program to calculate factorial with for loop
//for loop
#include<stdio.h>
int main(){
    int fact,i,a;
    printf("Enter the number of which you want factorial of\n");
    scanf("%d",&fact);
    a=1;
    for(i=fact;i>0;i--){
        a=a*i;
    }
        printf("The Factorial of %d is\n%d",fact,a);
    return 0;
}
// While loop
#include<stdio.h>
int main(){
    int fact,i,a;
    printf("Enter the number of which you want factorial of\n");
    scanf("%d",&fact);
    i=fact;
    a=1;
    while(i>0){
        a=a*i;
        i--;
    }
    printf("The Factorial of %d is\n%d",fact,a);
    return 0;
}
