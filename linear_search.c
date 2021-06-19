// linear search
#include<stdio.h>
void main()
{
    int i,n,num,a[10],pos;
    printf("\n Enter the number of elements in the array : \t");
    scanf("%d",&n);
    printf("\n Enter the elements of the array : \t\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the element you need find : \t");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        pos=i+1;
    }
    printf("\n The element is found at position \t%d",pos);
}
