// Program to recieve number of subjects from user to calculate sum and percentage obtained
#include <stdio.h>

int main()
{
    int eng, phy, chem, math, comp;
    float sum, percentage;
    printf("Enter the marks obtained in sub1\n");
    scanf("%d", &eng);
    printf("Enter the marks obtained in sub2\n");
    scanf("%d", &phy);
    printf("Enter the marks obtained in sub3\n");
    scanf("%d", &chem);
    printf("Enter the marks obtained in sub4\n");
    scanf("%d", &math);
    printf("Enter the marks obtained in sub5\n");
    scanf("%d", &comp);
    sum = (eng + phy + chem + math + comp);
    percentage = sum / 5;
    printf("The total number obtained by students is %f/n", sum);
    printf("The Percentage obtained by Student is %f%%", percentage);
    return 0;
}