/* C program to find modified grades of student on their marks with the help of nested if else loop*/
#include<stdio.h>

char line[100];  //  line input marks
float marks;     

int main()
{
    printf("Enter percentage marks of studend :  ");

    fgets(line,sizeof(line),stdin);        //input marks from command line
    sscanf(line,"%f", &marks);          //scan marks 

    if(marks >= 91 &&  marks <= 100)        /* first nested if else loop for 'A' 'A-' 'A+' grades.*/
    {
        if(marks >= 91 && marks <= 93)
        {
            printf("A- grade\n");
        }
        else if(marks >= 98 && marks <= 100)
        {
            printf("A+ grade\n");
        }
        else
        {
            printf("A grade\n");
        }
    }

    else if(marks >= 81 &&  marks <= 90)  /* second nested if else loop for 'B' 'B-' 'B+' grades.*/
    {
        if(marks >= 81 && marks <= 83)
        {
            printf("B- grade\n");
        }
        else if(marks >= 88 && marks <= 90)
        {
            printf("B+ grade\n");
        }
        else
        {
            printf("B grade\n");
        }
    }
    else if(marks >= 71 &&  marks <= 80)    /* third nested if else loop for 'C' 'C-' 'C+' grades.*/
    {
        if(marks >= 71 && marks <= 73)
        {
            printf("C- grade\n");
        }
        else if(marks >= 78 && marks <= 80)
        {
            printf("C+ grade\n");
        }
        else
        {
            printf("C grade\n");
        }
        
    }

    else if(marks >= 61 &&  marks <= 70)   /* fourth nested if else loop for 'D' 'D-' 'D+' grades.*/
    {
        if(marks >= 61 && marks <= 63)
        {
            printf("D- grade\n");
        }
        else if(marks >= 68 && marks <= 70)
        {
            printf("D+ grade\n");
        }
        else
        {
            printf("D grade\n");
        }
    }
    else             /* last else loop for marks below 60 ,there is only one 'F' grade.*/
    {
        printf("F grade\n");
    }
    return 0;

}

