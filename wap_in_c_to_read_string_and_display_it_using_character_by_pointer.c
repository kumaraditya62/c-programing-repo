#include<stdio.h>
#include<conio.h>
void main()
{
    char name [15],*ch;
    printf("enter your name: ");
    gets(name);
    ch=name;
    while(*ch!='\0')
    {
        printf("%c",*ch);
        ch++;
    }
    getch();
}