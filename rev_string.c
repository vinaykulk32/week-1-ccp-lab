// Program to reverse a string

#include <stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,j,siz=0;
    printf("\n Enter any word : \t");
    scanf("%s",str1);
    while (str1[siz]!='\0')
    {
        siz++;
    }
        j=siz-1;
    for(i=0;i<siz;i++)
    {
        str2[i]=str1[j];
        j--;
    }
    printf("\n The reverse of word is : \t");
    puts(str2);
}
