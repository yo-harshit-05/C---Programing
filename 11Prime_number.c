// Program 12 :To check prime number
#include <stdio.h>
void main()
{
    int num, flag = 0;
    printf("Enter any number\n");
    scanf("%d", &num);
    if (num == 1 || num == 2)
    {
        flag = 0;
    }
    else if (num > 2)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag++;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("The given number is not prime number \n");
    }
    else
    {
        printf("THe given number is a prime number\n");
    }
}
