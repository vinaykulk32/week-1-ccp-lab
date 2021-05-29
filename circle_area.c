#include<stdio.h>
#include<math.h>
float area(float);
int main()
{
    float r,res;
    printf("\n enter the radius of the circle:");
    scanf("%f",&r);
    res=area(r);
    printf("\n the area of circle is:%0.4f",res);
    return 0;
}
float area(float r)
{
    float pi=3.142,A;
    A=(float)pi*r*r;
}
