#include<stdio.h>
int main()
{
    int h,m,total_minutes;
    printf("\nEnter the Time in Hours and Minutes:\n");
    scanf("%d%d", &h,&m);
    total_minutes = convert_to_minutes(h,m);
    printf("\nTotal Time in Minutes:\t%d", total_minutes);
    return 0;
}
int convert_to_minutes(int h, int m)
{
    int total_minutes;
    total_minutes = (h*60)+m;
    return total_minutes;
}
