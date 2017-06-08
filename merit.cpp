#include<stdio.h>
#include<conio.h>
char grade;
int main()
{
    printf("Please input your grade from A TO E\n");
    scanf("%s",&grade);
    if(grade=='A')
        {
            printf("Distinction\n");
        }
    else if(grade=='B')
    {
        printf("Credit\n");
    }
    else if(grade=='C' or grade=='D')
    {
        printf("Pass\n");
    }
    else if(grade=='E')
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}
