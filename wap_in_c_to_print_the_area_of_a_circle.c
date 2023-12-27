#include <stdio.h>
#include <math.h>
#define PI 3.14 

int main()
{
    float r, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}
