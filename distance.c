#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float distance;
    printf("\n enter the co-ordinates x1 and y1");
    scanf("%d %d",&x1,&y1);
    printf("\n enter the co-ordinates x2 and y2");
    scanf("%d %d",&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("\n distance=%f",distance);
    return 0;
}
