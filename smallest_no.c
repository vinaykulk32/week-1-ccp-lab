#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("\n enter three numbers\n\n\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<n2)
    {
        if(n1<n3)
        {
            printf("\n %d is the smallest",n1);
        }
        else
        {
          printf("\n %d is the smallest",n3);
        }
    }
    else if(n2<n3)
    {
        printf("\n %d is smallest",n2);
    }
    else
        printf("\n %d is smallest",n3);
}
