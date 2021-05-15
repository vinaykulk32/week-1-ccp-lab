#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,area,s;
    printf("\n enter 3 sides of the triangle ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("\n semi perimetre of triangke is :%f",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n area of triangle : %.2f",area);
}
