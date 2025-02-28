#include<stdio.h>
void main(){
    int a[100],n,i,search,flag=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter elements in Array\n");
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("Enter element to search\n");
    scanf("%d",&search);
    for ( i = 0; i < n; i++)
    {
        if (a[i]==search){
            flag=1;
            break;
        }}
    if (flag==1)
        printf("The element is found at %d position\n",i+1);

    else
        printf("Element is not present in the list\n");
    
}