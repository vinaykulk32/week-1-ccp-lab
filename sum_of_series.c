// sum of a series
#include<stdio.h>
void main()
{
    int n,i;
    float a,sum=0;
    printf("\n\t Enter the number till which sum is to be evaluated : \t" );
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=(float)i/(i+1);
        sum=(float)sum+a;
    }
    printf("\n\t the sum is %.2f",sum);
}
