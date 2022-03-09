/*write a program create 3*3 matrix and check it is diagonal or not.
Date:21-02-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,c;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nValue of matrix[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	clrscr();
	printf("\nMatrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{

		for(j=0,c=0;j<3;j++)
		{
			if(i==j && a[i][j]==0)
			{
				c==1;
			}
			if(i!=j && a[i][j]!=0)
			{
				c=1;
			}
		}
	}
	if(c==1)
	{
		printf("\n The matrix is not a diagonal");
	}
	else
	{
		printf("\n The matrix is diagonal");
	}
	getch();
}