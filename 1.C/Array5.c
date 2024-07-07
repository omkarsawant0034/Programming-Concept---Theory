#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 31.90f;
    double d = 90.7865;
    
    char *pc = &ch;
    int *pi = &i;
    float *pf = &f;
    double *pd = &d;

 
    printf("%p\n",ch);
    printf("%p\n",i);
    printf("%p\n",f);
    printf("%p\n",d);


    
    return 0;
}