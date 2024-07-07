#include<stdio.h>

int main ()
{
    int i = 0;

    char cArr[4] = {'A','B','C','D'};

    int iArr[4] = {11,12,13,14};

    float fArr[4] = {1.1,2.2,3.3,4.4};

    double dArr[4] = {1.111,2.222,3.333,4.34343};

for(i=0;i<4;i++)
{
    printf("Print Array:%c\n",cArr[i]);
    printf("Print Array:%d\n",iArr[i]);
    printf("Print Array:%f\n",fArr[i]);
    printf("Print Array:%f\n",dArr[i]);

}
    return 0;
}