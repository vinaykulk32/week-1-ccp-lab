// Interchanging smallest and largest number in array
#include<stdio.h>
void main()
{
    int i,n,a[5],b[5],large=-1111,small=9999,large_pos,small_pos,temp;
    printf("\n Enter the number of elements in the array : \t");
    scanf("%d",&n);
    printf("\n Enter the elements of the array : \t\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
            large=a[i];
            large_pos=i;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
            small_pos=i;
    }
    printf("\n The largest number is : %d",large);
    printf("\n The smallest number is : %d",small);
    temp=a[small_pos];
    a[large_pos]=a[small_pos];
    a[large_pos]=temp;
    printf("\n The interchanged array is : \n");
    for(i=0;i<n;i++){
    printf("%d",a[i]);}
}
