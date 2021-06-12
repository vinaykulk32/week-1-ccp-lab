// check weather a given number is prime or not

#include<stdio.h>
int main()
{
    int flag=0,i,num;
    printf("\n\t Enter a number : \t");
    scanf("%d",&num);
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(num==1)
        {
        printf("\n\t 1 is a universal prime number");
        }
        else{
            if(flag==0)
                {printf("\n\t %d is a prime number",num);}
            else
                {printf("\n\t %d is a composite number",num);}
            }
    return 0;
}
