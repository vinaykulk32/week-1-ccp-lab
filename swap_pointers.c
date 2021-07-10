// swapping using pointers

#include<stdio.h>
void main()
{
    int a,b,*pa,*pb,t;
    printf("\n enter two number : \n");
    scanf("%d%d",&a,&b);
    pa=&a;
    pb=&b;
    printf("\n before swaping=\t%d\t%d",a,b);
    t=*pa;
    *pa=*pb;
    *pb=t;
    printf("\n after swap = \t%d\t%d",a,b);
}
