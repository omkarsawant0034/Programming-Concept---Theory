#include<stdio.h>

 struct Hello 
    {
        int no;
        float d;
    };

struct Demo
{
    int i;
    float f;
    struct  Hello hobj;
   
};

int main()
{
    // dobj.i = 11;
    // dobj.f = 90.99;

    struct Demo dobj;

    // dobj.hobj.no = 21;
    // dobj.hobj.d = 90.88;

     printf("Size of object is:%d\n",sizeof(dobj));
    // printf("\n%d",dobj.i);
    // printf("\n%f",dobj.f);
    // printf("\n%d",dobj.hobj.no);
    // printf("\n%f",dobj.hobj.d);

    return 0;
}