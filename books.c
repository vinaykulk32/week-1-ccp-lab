// program to read and print details of three books & print the details of the book with highest price

#include<stdio.h>
void main()
{
    struct books
    {
        int pages,d,m,y,price;
        char name[100];
        char title[100];
    }a,b,c;
    int i=0;
    printf("\n Enter the name of the author : \t");
    gets(a.name);
    printf("\n Enter the title of the book : \t");
    gets(a.title);
    printf("\n Enter the date of publication the book : \t");
    scanf("%d%d%d",&a.d,&a.m,&a.y);
    printf("\n Enter the price of the book : \t");
    scanf("%d",&a.price);
    printf("\n Enter the number of pages in the book : \t");
    scanf("%d",&a.pages);

    printf("\n\n\n____________________________________________\n\n\n");

    printf("\n Enter the the name of author : \t");
    scanf("%s",b.name);
    printf("\n Enter the title of the book : \t");
    scanf("%s",b.title);
    printf("\n Enter the date of publication of the book : \n");
    scanf("%d%d%d",&b.d,&b.m,&b.y);
    printf("\n Enter the price of the book : \t");
    scanf("%d",&b.price);
    printf("\n Enter the number of pages in the book : \t");
    scanf("%d",&b.pages);

    printf("\n\n\n____________________________________________\n\n\n");

    printf("\n Enter the name of the author : \t");
    scanf("%s",c.name);
    printf("\n Enter the title of the book : \t");
    scanf("%s",c.title);
    printf("\n Enter the date of publication the book : \t");
    scanf("%d%d%d",&c.d,&c.m,&c.y);
    printf("\n Enter the price of the book : \t");
    scanf("%d",&c.price);
    printf("\n Enter the number of pages in the book : \t");
    scanf("%d",&c.pages);

    printf("\n\n\n____________________________________________\n\n\n");
    if(a.price>b.price&&a.price>c.price)
    {
        printf("\n THE BOOK WITH HIGHEST PRICE IS:\n\n\n");
        printf("\nauthor : \t%s\ntitle : \t%s\nprice : \t%d\npages : \t%d\ndate of publication : %d|%d|%d",a.name,a.title,a.price,a.pages,a.d,a.m,a.y);
    }
    if(b.price>a.price&&b.price>c.price)
    {
        printf("\n THE BOOK WITH HIGHEST PRICE IS:\n\n\n");
        printf("\nauthor : \t%s\ntitle : \t%s\nprice : \t%d\npages : \t%d\ndate of publication : %d|%d|%d",b.name,b.title,b.price,b.pages,b.d,b.m,b.y);
    }
    if(c.price>a.price&&c.price>b.price)
    {
        printf("\n THE BOOK WITH HIGHEST PRICE IS:\n\n\n");
        printf("\nauthor : \t%s\ntitle : \t%s\nprice : \t%d\npages : \t%d\ndate of publication : %d|%d|%d",c.name,c.title,c.price,c.pages,c.d,c.m,c.y);
    }
}
