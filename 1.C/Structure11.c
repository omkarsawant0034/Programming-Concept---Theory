#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    char ch;
    // char chr1;
    // char ch2;
    float f;
    //int no;
    double d;
    //int d;
};
int main ()
{

    struct Demo obj;

    printf("\nSize:%d",sizeof(obj));


    return 0;
}