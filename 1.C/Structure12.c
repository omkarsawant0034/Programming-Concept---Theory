#include<stdio.h>

union Demo
{
    int i;
    char ch;
    float f;
    double d;
    
};
int main ()
{

    union Demo obj;

    printf("\nSize:%d",sizeof(obj));

    obj.f = 90.99;
    obj.i = 11;

    printf("\n%f",obj.f);
    printf("\n%i",obj.i);

    return 0;
}