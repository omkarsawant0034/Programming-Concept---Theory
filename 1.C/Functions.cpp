#include<stdio.h>

void fun_Value(int iNo)
{
    printf("Value\n");  
    iNo++;          //10 because iNo is loacal variable of fun_value
}
void fun_Address(int *ptr )
{
    printf("Address\n");
    (*ptr)++;         // 10 => 11 ; *ptr => 11
}
void fun_Reference(int &ref)
{
    printf("Reference\n");
    ref++;            // 10 => 11 ; k == &ref++
}

int main()
{
    int i = 10, j = 10 , k = 10;

    fun_Value(10);
    fun_Address(&j);
    fun_Reference(k);

    printf("Call by Value : i : %d\n",i);
    printf("Call by Address : j : %d\n",j);
    printf("Call by Reference : k : %d\n",k);

    return 0;
}