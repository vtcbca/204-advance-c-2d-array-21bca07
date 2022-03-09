/*Wap to create to 3*3 matrix and print them sum of it.
Date:18/02/2022
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[3][3],mat2[3][3],i,j,s[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nValue for Matrix1[%d][%d]:",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nValue for Matrix2[%d][%d]:",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	clrscr();
	printf("Matrix 1:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",mat1[i][j]);
		printf("\n");
	}
	printf("Matrix 2:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",mat2[i][j]);
		printf("\n");

	}
       for(i=0;i<3;i++)
       {
		for(j=0;j<3;j++)
		{
			s[i][j]=mat1[i][j]+mat2[i][j];

	       //	printf("\n%d",s);
	       }
	}
	printf("Sum of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
	getch();
}

