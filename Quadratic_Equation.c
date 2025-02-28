// Program to calculate roots of Quadratic Equation
#include<stdio.h>
#include<math.h>
void main(){
    float a, b, c, d,roots,root1,root2;
    printf("Enter the value for a , b , c\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("The equation hence form is\n%.1fx^2+%.1fx+%.1f=0\n",a,b,c);
    d=b*b-4*a*c;
    if (d<0)
        printf("The roots are imaginary");
    else if (d==0){
        roots=-b/(2*a);
        printf("It will give two same roots that is \n%f ",roots);
    }
    else{
        root1=((-b)+sqrt(d))/(2*a);
        root2=((-b)-sqrt(d))/(2*a);
        printf("The two distinct roots are\n%.2f,%.2f",root1,root2);
        
    }


    }
