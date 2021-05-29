#include<stdio.h>
#include<math.h>
float area(int, int, int);
int main()
{
    int a,b,c;
    float A;
    printf("enter the three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    A=area(a,b,c);
    printf("\n the area of triangle is;%.2f",A);
    return 0;
}
float area(int a, int b, int c)
{
    float s,area;
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
