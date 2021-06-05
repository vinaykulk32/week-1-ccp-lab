//program to print even numbers lying between m and n

#include<stdio.h>
void main()
{
    int m,n;
    printf("\t enter the smaller number m:\t");
    //user enters the number
    scanf("%d",&m);
    printf("\t enter the bigger number n:\t");
    //user enters the second number
    scanf("%d",&n);
    for(m;m<=n;m++)
    //loop enters
        {
            if(m%2==0)
            printf("\t the even number is : \t%d\n",m);
        }
}


