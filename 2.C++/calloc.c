#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of Array :\n");
    scanf("%d",&iSize);

    ptr = (int *)calloc(iSize , sizeof(int));
    ptr[0]=10;
    ptr[1]=11;
    ptr[2]=12;

    free(ptr);

    return 0;
}

// void *  malloc(int size)
// void * calloc(int No_of_elements int size_of_each_element);   