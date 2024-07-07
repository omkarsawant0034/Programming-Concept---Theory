#include<stdio.h>

int main()
{
    float Radius = 0.0f;
    const float Pi = 3.14f;
    float Area = 0.0f;

    printf("Enter size of radius:\n");
    scanf("%f",&Radius);

    Area = Pi * Radius * Radius;

    printf("Area Of Circle: %f \n",Area);

    return 0;
}