#include<stdio.h>

int CalculateLength(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter Your Name : \n");
    scanf("%[^\n]s",Arr);

    printf("Your Name is : %s\n",Arr);

    iRet = CalculateLength(Arr);

    printf("Length of String is : %d\n",iRet);

    return 0;
}