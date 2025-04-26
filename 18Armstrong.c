// Program 18 : To check Armstrong Number
#include <stdio.h>
void main()
{
    int num, temp, digit, sum;
    printf("Enter number to check weather it is armstrong or not\n");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("The given number is armstrong number\n");
    }
    else
        printf("The given number is not armstrong \n");
}
