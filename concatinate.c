// C program to concatanate two strings

#include<stdio.h>
void main()
{
    int i=0,j=0,lentgh;
    char str1[20],str2[20],str3[20];
    printf("\n Enter something in string 1 : \t");
    gets(str1);
    printf("\n Enter something in string 2 : \t");
    gets(str2);
    while(str1[i]!='\0')
        {
            str3[j]=str1[i];
            i++;j++;
        }
        i=0;
    while(str2[i]!=0)
        {
            str3[j]=str2[i];
            lentgh=j+1;
            j++;i++;
        }
    printf("\n The concatinated string is : \t%s",str3);
    printf("\n The length is : \t%d",lentgh);
}
