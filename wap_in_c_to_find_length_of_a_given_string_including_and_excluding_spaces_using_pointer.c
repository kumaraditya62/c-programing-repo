#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],*s;
    int p=0,q=0;
    printf("enter string: ");
    gets(str);
    s=str;
    while(*s!='\0') 
    {
        p++;
        s++;
        if(*s==32)
        q++;
    }
    printf("%s",str); 
    printf("\n length of string including spaces:%d",p);
    printf("\n length of string excluding spaces:%d",p-q);
    getchar(); 
}
