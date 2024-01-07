#define row 3
#define col 4
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,mat[row][col],mat2[row][col],mat3[row][col];
printf("enter matrix mat1(%d*%d)row-wise:\n",row,col);
for(i=0;i<row;i++)
for(j=0;j<col;j++)
scanf("%d",&mat[i][j]);
printf("enter matrix mat2(%d*%d)row-wise:\n",row,col);
for(i=0;i<row;i++)
for(j=0;j<col;j++)
scanf("%d",&mat2[i][j]);
for(i=0;i<row;i++)
for(j=0;j<col;j++)
mat3[i][j]=mat[i][j]+mat2[i][j];
printf("the resultant matrix mat3 is \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
printf("%5d",mat3[i][j]);
printf("\n");
}
getch();
}