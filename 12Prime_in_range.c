// Program 13 : To print all prime number 1 to 10
#include <stdio.h>
void main()
{
    int upper;
    printf("Enter Number till want prime number\n");
    scanf("%d", &upper);
    printf("The prime numbers between 1 to %d is :\n", upper);
    for (int num = 2; num <= upper; num++)
    {
        int isprime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime)
        {
            printf("%d\t", num);
        }
    }
}
