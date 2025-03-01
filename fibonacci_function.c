// Program to print fibonacci series using recursion
#include<stdio.h>
void main(){
    int size,a ;
    printf("Enter the size of fibonacci series\n");
    scanf("%d",&size);
    printf("The fibonacci series hence formed is \n");
    for (int i = 1; i <= size; i++)
    {
        a=fibo(i);
        printf("%d\n",a);
    }
}
int fibo(int i);
int fibo(int i){
    if (i==1)
    {
        return 0;
    }
    else if (i==2)
    {
        return 1;
    }
    else{
        return fibo(i-1)+fibo(i-2);
    }
    
    


}