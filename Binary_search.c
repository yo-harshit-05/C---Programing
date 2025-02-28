// Program to perform Binary Search
#include<stdio.h>
void main(){
    int a[100],n,i,search,first,middle,last;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
        a[i]=i;
    printf("Enter value to search\n");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first + last)/2;
    while (first<=last)
    {
        if (search<middle)
        {
            last=middle;
            middle=(first+last)/2;
        }
        else if (search==middle)
        {
            printf("Element found on %d location\n",middle+1);
            break;
        }
        else{
            first=middle;
            middle=(first+last)/2;
        }
        if (first>last)
        {
            printf("The element is not present in list\n");
        }
    }
}
