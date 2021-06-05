//program to find the sum of its numbers

#include<stdio.h>
void main()
{
    long int m,sum=0;
    float rem;
    printf("\t Enter the number : \t");
    scanf("%ld",&m);
    do{
        rem=m%10;
        sum=sum+rem;
        m=m/10;
    }while(m>0);

    printf("\n\n\t the sum of the numbers is : \t%ld",sum);
}
