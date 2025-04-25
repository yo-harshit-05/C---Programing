// Program 14 : Quadratic Equation
#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,root,root1,root2,determinant,real_part, imaginary_part;
    printf("The Standard Quadradic equation is in the form of \nax²+bx+c\nSo Enter the values of a,b,c\n");
    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);
    printf("Enter the value of c\n");
    scanf("%f",&c);
    determinant=b*b-4*a*c;
    if (determinant>0)
    {
        printf("Roots are real and distinct\n");
        root1=(-b+(sqrt(determinant))/(2*a));
        root1=(-b-(sqrt(determinant))/(2*a));
        printf("Root1 = %.2f, Root2=%.2f\n",root1,root2);
    }
    else if (determinant==0){

        printf("The roots are real and same\n");
        root=-b/2*a;
        printf("Root1 and root 2 = %.2f\n",root);

    }
    else
    {
        printf("The given roots are imaginary\n");
        determinant=determinant*(-1);
        real_part=(-b/(2*a));
        imaginary_part=sqrt(determinant)/(2*a);
        printf("Root1=%.2f+i%.2f\n",real_part,imaginary_part);
        printf("Root2=%.2f-i%.2f\n",real_part,imaginary_part);
    }

}
