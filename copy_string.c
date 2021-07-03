// C program to copy one string to another and find its length

#include<stdio.h>
void main()
{
    int i=0,j=0,lentgh;
    char str1[20],str2[20];
    printf("\n Enter something in string 1 : \t");
    gets(str1);
    printf("\n Enter something in string 2 : \t");
    gets(str2);
    while(str1[i]!='\0')
        {
            str1[i];
            i++;
        }
    while(str2[j]!=0)
        {
            str1[i]+=str2[j];
            lentgh=i+1;
            j++;
            i++;
        }
    printf("\n The copied string is : \t");
    puts(str1);
    printf("\n The length is : \t%d",lentgh);
}
