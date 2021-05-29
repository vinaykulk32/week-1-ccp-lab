#include<stdio.h>
float avg(int,int,int);
int main()
{
    int a,b,c;
    float y;
    printf("\n enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    y=avg(a,b,c);
    printf("%.2f",y);
    return 0;
}
float avg(int a,int b, int c)
{
    float avg;
    avg=(a+b+c)/3;
    return avg;
}
