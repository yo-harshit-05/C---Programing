// Program to calculate taxes of employees to be paid at the end of the year
#include <stdio.h>
int main()
{
    float salary, tax;
    printf("Enter the amout Of Salary u recieved every anum\n");
    scanf("%f", &salary);
    if (salary < 250000)
    {
        printf("You dont need to pay any taxes!\n Your Overall amount is %f", salary);
    }
    else if (salary >= 250000 && salary <= 500000)
    {
        tax = 0.95 * salary;
        printf("Since your salary is between 2.5 Lakh to 5 Lakh so 5%% tax will be applied on your salary and the amount you receivd is\n %f", tax);
    }
    else if (salary >= 500000 && salary <= 1000000)
    {
        tax = 0.80 * salary;
        printf("Since your salary is between 5 Lakh to 10 Lakh so 20%% tax will be applied on your salary and the amount you receivd is\n %f", tax);
    }
    else
    {
        tax = 0.70 * salary;
        printf("Since your salary is above 10 Lakh so 30%% tax will be applied on your salary and the amount you receivd is\n %f", tax);
    }

    return 0;
}
