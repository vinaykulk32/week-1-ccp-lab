//program to print even numbers lying between m and n
#include<stdio.h>
void main()
{
    int m,n;
    printf("\t enter the smaller number m:\t");
    //user enters the number
    scanf("%d",&m);
    printf("\t enter the bigger number n:\t");
    //user enters the number
    scanf("%d",&n);
    do
    //loop enters
    {
        if(m%2==0)
        //condition for even number
        {
            printf("\t the even number is : \t%d\n",m);
            m=m+2;
        }
        else
        {
            m+=1;
        }
    }while(m<=n);
}
