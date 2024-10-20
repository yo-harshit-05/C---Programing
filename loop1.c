/*#include<stdio.h>
int main(){
    int a,i,sum;
    printf("Enter the number till which you need sum of natural numbers\n");
    scanf("%d",&a);
    sum=0;
    i=1;
    while(i<=a){
        sum+=i;
        i++;
    }
    printf("The sum of first %d natural number is \n%d",a,sum);
    return 0;
}
#include<stdio.h>
int main(){
    int a,i,sum;
    printf("Enter the number till which you need sum of natural numbers\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("The sum of first %d natural number is \n%d",a,sum);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int a, i, sum;
    printf("Enter the number till which you need sum of natural numbers\n");
    scanf("%d", &a);
    sum = 0;
    i = 1;
    do
    {

        sum += i;
        i++;
    } while (i <= a);
    printf("The sum of first %d natural number is \n%d", a, sum);
    return 0;
}