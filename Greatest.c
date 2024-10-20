// Program to find greatest of four numbers
#include <stdio.h>
int main(){
    int a,b,c,d,g;
    g=a;
    printf("Enter the four values");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (b > g){
        g=b;
    }
    if (c > g){
        g=c;
    }
    if (d > g){
        g=d;
    }
    printf("The Value of greatest term is %d",g);
    return 0;
}