#include<stdio.h>
#include<conio.h>
void main()
{
    float length,width,area;
    printf("enter the length and width of the rectrangle: ");
    scanf("%f%f",&length,&width);
    area=length*width;
    printf("The area of the rectrangle is %f \n",area);
    getch();
}