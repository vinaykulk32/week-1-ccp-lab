#include<stdio.h>
void main()
{
    long int n,reverse_Number = 0, rem;
    printf("\n\t Enter a number : \t");
    scanf("%ld",&n);
    for(;n != 0;)
    {
        rem = n%10;
        reverse_Number = reverse_Number*10 + rem;
        n=n/10;
    }
    printf("Reversed Number of %ld is = %ld",n,reverse_Number);
}
