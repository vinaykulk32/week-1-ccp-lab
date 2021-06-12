#include<stdio.h>
void main()
{
    int n,i,factorial=1;
    printf("\n\t Enter the number : \t");
    scanf("%d",&i);
    for(n=1;n<=i;n++)
    {
        factorial=factorial*n;
    }
    printf("\n\t Factorial of a %d : %d",n,factorial);
}
