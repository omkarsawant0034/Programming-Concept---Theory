#include<stdio.h>

int main()
{
    int X = 11;
    
    const int Y = 11;

    X++;
  //  Y++;

  printf("%d\n",X);
  printf("%d\n",Y);

    return 0;
}
