#include<stdio.h>
int main()
{
    float Cen,Fah;
    printf("\n enter the temperature in degree fahrenheit:");
    scanf("%f",&Fah);
    Cen=(Fah-32)*5/9;
    printf("\n temprature in celsius:%f",Cen,Fah);
    return 0;
}
