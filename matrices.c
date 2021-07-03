// program to add two matrices

#include<stdio.h>
void main()
{
    int i,j,m;
    float sum=0;
    printf("\n Enter the number of order of the matrices(2/3/4) : \t");
    scanf("%d",&m);
    int mat1[m][m],mat2[m][m];
    printf("\n Enter the elements of first matrices : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat1[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n Enter the elements of second matrices : \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat2[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n The sum of two matrices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=mat1[i][j] + mat2[i][j];
            printf("%.2f",sum);
            sum=0;
            printf("\t");
        }
        printf("\n");
    }
}
