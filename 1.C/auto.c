#include<stdio.h>

void Display()
{
   register int no = 11;
    register int  i;

    auto int j = 21;

    printf("Value of no:%d\n",no);
    printf("Value of i:%d\n",i);
    printf("Value of j:%d\n",j);

}

int main(){

    Display();
    
    return 0;
}