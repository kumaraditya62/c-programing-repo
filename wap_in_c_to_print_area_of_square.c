#include<stdio.h>
#include<conio.h>
void main()
{
    int side,area;
    printf("enter the side length of square: ");
    scanf("%d",&side);

    area=side*side;
    printf("the area of the square is: %d\n",area);
    getch();
}