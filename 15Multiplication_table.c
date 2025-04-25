// Program 16 : Multiplication Table
#include<stdio.h>
void main(){
    int num;
    printf("Enter number you want table of\n");
    scanf("%d",&num);
    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }

}
