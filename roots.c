#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float delta,root1,root2,deno;
    printf("\n enter the three co-efficients\n");
    scanf("%d%d%d",&a,&b,&c);
    delta=b*b-4*a*c;
    deno=2*a;
    if(delta>0)
    {
      printf("\n the roots are real \n");
      root1=(-b+sqrt(delta))/deno;
      root2=(-b-sqrt(delta))/deno;
      printf("\n root1=%.2f\t root2=%.2f\n",root1,root2);
    }
      else if(delta==0)
    {
      root1=root2=-b/deno;
      printf("\n roots are %.2f",root1);
    }
       else
       {
            delta=abs(delta);
            root1=-b/deno+(sqrt(delta))/deno;
            root2=-b/deno-(sqrt(delta))/deno;
            printf("\n roots are imaginary \n");
            printf("\n root1=%f+i%f\t root2=%f-i%f",-b/deno,(sqrt(delta))/deno,-b/deno,(sqrt(delta))/deno);
       }

}


