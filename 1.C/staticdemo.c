#include<stdio.h>

void fun()
{
    auto i = 10;
    i++;
    printf("Value of i is:%d\n",i);

}
int main()
{
    fun();
    fun();
    fun();
   
    return 0;
}