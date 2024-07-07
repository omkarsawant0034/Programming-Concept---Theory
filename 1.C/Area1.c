#include<stdio.h>

float Ans(float A,float B)
{
    float Ans = 0.0f, Pi = 3.14f;
    Ans = A * B * Pi;
    return Ans;
}

int main()
{
    float Radius = 0.0f;
    const float Pi = 3.14f;
    float Area = 0.0f;

    printf("Enter size of radius:\n");
    scanf("%f",&Radius);

    // Area = Pi * Radius * Radius;

    Area = Ans(Radius,Pi);
    printf("Area Of Circle: %f \n",Area);

    return 0;
}