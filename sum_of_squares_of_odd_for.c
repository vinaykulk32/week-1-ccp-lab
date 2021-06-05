//program to find sum of squares of first n odd numbers

#include<stdio.h>
#include<math.h>
int main()
{
    int m=1,n,sum=0;
    printf("\n\t Enter the the number till which, \n\t the sum of squares of odd numbers is to calculated:\t");
    scanf("%d",&n);
    for(m;m<=n;m%2==0){
        sum=sum+pow(m,2);
        m=m+2;
    }
    printf("\n\t the sum of squares of odd numbers is:\t%d",sum);
    return 0;
}
