#include<stdio.h>

int main()
{
    int Arr[4] = {11,12,13,14};

    printf("Base address of array:%d\n",Arr);
    printf("Base address of first element of  array:%d\n",&Arr[0]);
    printf("Address of seconnd element of array:%d\n",&Arr[1]);
    printf("First elememt is :%d\n",Arr[0]);
    printf("The size of array:%d\n",sizeof(Arr));
    printf("size of second element of array:%d\n",Arr[1]);
    
    return 0;
}
