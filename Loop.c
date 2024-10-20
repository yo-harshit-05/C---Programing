// While loop
/*#include <stdio.h>
int main()
{
    int i, a, j;
    char ch;
    j = 0;
    while (j==0)
    {
        printf("Enter number of which you want table ");
        scanf("%d", &a);
        i = 1;
        while (i < 11)
        {
            printf("%d * %d = %d\n", a, i, a * i);
            i++;
        }
        printf("Do you want to find more table?\n");
        scanf(" %c", &ch);
        if (ch == 'N' || ch == 'n')
        {
            printf("!!Program Terminated!!");
            break;
        }
        else if (ch=='y'||ch=='Y')
        {
            j = 0;
        }
        else{
            printf("!!INVALID INPUT!!\nPlease Enter y or n to print the table\n");
        }
    }
    return 0;
}
*/
#include <stdio.h>
int main(){
    int i,a,j;
    char ch;
    i=0;
    while(i==0){
        printf("Enter number of which you want table ");
        scanf("%d", &a);
        for(j=10;j;j--){
            printf("%d * %d = %d\n", a, j, a * j);
        }
        printf("Do you want to find more table?\n");
        scanf(" %c", &ch);
        if (ch == 'N' || ch == 'n')
        {
            printf("!!Program Terminated!!");
            break;
        }
        else if (ch=='y'||ch=='Y')
        {
            i = 0;
        }
        else{
            printf("!!INVALID INPUT!!\nPlease Enter y or n to print the table\n");
        }
    }
    return 0;
}


    
