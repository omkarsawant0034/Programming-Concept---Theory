#include<stdio.h>

int main()
{
    int No = 0;
    int Ans = 0;

    printf("Enter number : \n");
    scanf("%d",&No);

    Ans = No % 2;
    printf("Remander : %d\n",Ans);

    if (Ans == 0)  //Jar
    {
        printf("Number is Even\n");
    }
    else  //Tar
    {
        printf("Number is Odd\n");
    }

    return 0;
}