#include<stdio.h>

int main()
{
    int Standard = 0;
    
    printf("**** PRIMARY SCHOOL PORTAL ****\n\n");
    printf("Enter your division:\n");
    scanf("%d",&Standard);

    if(Standard == 1)

    {
        printf("Your exam is at 1 PM\n");
    }
    else if (Standard == 2)
    {
        printf("Your exam is at 2 PM\n");
    }
    else if (Standard == 3)
    {
         printf("Your exam is at 3  PM\n");
    }
    else if( Standard == 4)  //if else ladder
    {
         printf("Your exam is at 4 PM\n");
    }
    else
    {
         printf("Invalid Standard\n");
    }

    return 0;
}
