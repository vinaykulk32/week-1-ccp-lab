// Demonstrate how to read data from the keyboard, write it to a file called BMSCE,
// again read the same data from the BMSCE file, and display it on the screen/console


#include<stdio.h>
void main()
{
    FILE *a;
    char any_data[100];
    a=fopen("BMSCE","w");
    printf("\n ENTER ANY DATA THAT NEED TO BE STORED IN THE FILE : \t");
    if(a=='\0')
    {
        printf("\n _____________FILE CANNOT BE OPENED_______ ");
    }
    else
    {
        gets(any_data);
    }
    fclose(a);
    printf("\n\n\n\n___________________________________________\n\n\n\n");
    fopen("BMSCE","r");
    printf("\n THE DATA WRITTEN INTO THE FILE BMSCE IS  : \t");
    puts(any_data);
    fclose(a);
}
