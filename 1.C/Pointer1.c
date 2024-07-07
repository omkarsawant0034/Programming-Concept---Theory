#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 11.11f;
    double d = 1.11115;

    char *pc = &ch;
    int *ip = &i;
    float *pf = &f;
    double *pd = &d; 

    printf("Pointer Of ch:%c\n",*pc);
    printf("Pointer Of ch:%i\n",*ip);
    printf("Pointer Of ch:%f\n",*pf);
    printf("Pointer Of ch:%f\n",*pd);

    return 0;
    
}