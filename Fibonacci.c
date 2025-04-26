// Program 17 : Fibonacci series
#include<stdio.h>
void main(){
    int num,first,second,sum=0;
    printf("Enter value till you want series\n");
    scanf("%d",&num);
    first=0;
    second=1;
    printf("Fibonacci series hence form is\n%d\t%d\t",0,1);
    for (int i = 0; i < num-2; i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        printf("%d\t",sum);
    }

}
