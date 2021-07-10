// Develop a C program to perform arithmetic operations
//addition, subtraction, multiplication, division and remainder on two integers using pointers.

#include<stdio.h>
void main()
{
    int n1,n2,sum,sub,ty,rem,mul;
    int *pn1,*pn2;
    float div;
    printf("\n ENTER THE TWO NUMBERS:\n");
    scanf("%d%d",&n1,&n2);
    pn1=&n1;pn2=&n2;
    printf("\n\n");
    printf("\n ENTE 1 TO PERFOM ADDITION");
    printf("\n ENTE 2 TO PERFOM SUBTRATCTION");
    printf("\n ENTE 3 TO PERFOM MULTIPLICATION");
    printf("\n ENTE 4 TO PERFOM DIVISION ");
    printf("\n ENTE 5 TO PERFOM REMINDER ");
    scanf("%d",&ty);
    switch(ty)
    {
        case 1: sum=*pn1+*pn2;
        printf("\n SUM IS : \t%d",sum);
        break;
        case 2: sub=*pn1-*pn2;

        printf("\n SUBTRATCTION IS : \t%d",sub);
        break;
        case 3: mul=*pn1 * *pn2;
        printf("\n MULTIPLICATION IS : \t%d",mul);
        break;
        case 4: div=*pn1 / *pn2;
        printf("\n DIVISION IS : \t%.2f",div);
        break;
        case 5
        : rem=*pn1 / *pn2;
        printf("\n REMAINDER IS : \t%d",rem);
        break;

    }
}
