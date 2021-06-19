//program to find sum of element in an array
#include<stdio.h>
void main()
{
    int i,n,sum=0,array[5];
    printf("\n Enter the number of elements in the array : \t");
    scanf("%d",&n);
    printf("\n Enter the elements of the array : \t\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    printf("\n The sum of the elements of array is : %d",sum);
    printf("\n reversed array is : \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",array[i]);
    }
}

