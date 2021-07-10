// develop a C program to create student structure,
// read two student details( Student roll number, name, section, department, fees, and results i.e., total marks obtained) and print the student details who has scored the highest.

#include<stdio.h>
void main()
{
    struct stdudent
    {
        int r_no,fee,res;
        char name[200];
        char sect[20];
        char dep[100];
    }s1,s2;

    printf("\n Enter the details of the student(name,roll number,section,department,fee,result) : \t");
    scanf("%s%d%s%s%d%d",s1.name,&s1.r_no,s1.sect,s1.dep,&s1.fee,&s1.res);
    printf("\n ___________________________________________\n\n");
    printf("\n Enter the details second of the student(name,roll number,section,department,fee,result) : \t");
    scanf("%s%d%s%s%d%d",s2.name,&s2.r_no,s2.sect,s2.dep,&s2.fee,&s2.res);
    printf("\n The student with highest marks is : \n\n\n");
    if(s2.res>s1.res)
        {
            printf("\n %s\n%d\n%s\n%s\n%d\n%d",s2.name,s2.r_no,s2.sect,s2.dep,s2.fee,s2.res);
        }
        else
        {
            printf("\n %s\n%d\n%s\n%s\n%d\n%d",s1.name,s1.r_no,s1.sect,s1.dep,s1.fee,s1.res);
        }
}
