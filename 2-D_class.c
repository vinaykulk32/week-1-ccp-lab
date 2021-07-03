// A 2-D array to read marks of 4 students in 3 subjects and print highest marks in each subject

#include<stdio.h>
void main()
{
    int i,j,highest=0,a[4][3];
    printf("\n Enter marks of each student in each subject : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n\n");
    }
    printf("\n Highest marks in each subject is : \t");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;)
        {
            if(a[i][j]>highest)
                highest=a[i][j];
            else
                break;
        }
    }
    printf("%d\t",highest);
    for(i=0;i<4;i++)
    {
        for(j=1;j<3;)
        {
            if(a[i][j]>highest)
                highest=a[i][j];
            else
                break;
        }
    }
    printf("%d\t",highest);
        for(i=0;i<4;i++)
    {
        for(j=2;j<3;)
        {
            if(a[i][j]>highest)
                highest=a[i][j];
            else
                break;
        }
    }
    printf("%d\t",highest);

}
