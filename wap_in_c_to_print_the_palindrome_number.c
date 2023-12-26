#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem,rev=0,temp;    
    printf("Enter any number: ");
    scanf("%d",&num);
    temp=num;
    while (num != 0)
    {
        rem=num%10;
       
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(rev==temp)
    {
        printf("%d is a palindrome.\n", temp);
    }
    else
    {
        printf("%d is not a palindrome.\n", temp);
    }
    getch();
}
