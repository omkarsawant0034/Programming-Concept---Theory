#include<stdio.h>

void Display(int no)
{
    int j = 2;

   for (int i = 0; i < no; i++) 
   {
       // j = 2*i;
        printf("%d ",j);\

        j += 2;
        

        j = j+2;

        
   }
}

int main()
{
    int value = 0;

    scanf("%d",&value);

    Display(value);
    return 0;
}