#include<stdio.h>

struct Demo

{
    int no;
    int arr[3];
    float f;
};

int main()
{

struct Demo obj;

int no = 10;
int arr[3] = {22,12,12};
float f = 12.121;

printf("Size of Struct:%d\n",sizeof(obj));
  
    return 0;
}