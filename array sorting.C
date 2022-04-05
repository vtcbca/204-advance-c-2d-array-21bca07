/*WAP to enter 5 value & print sorted number.*/
#include<stdio.h>
#include<conio.h>
void input();
void print(int []);
void sort(int []);
//int a[5];
void main()
{
	clrscr();
	input();
      getch();

}
void input()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
printf("\nEnter value a[%d]:",i);

		scanf("%d",&a[i]);
	}
	clrscr();
	print(a);
}
void print(int a[])
{
	int i;
	for(i=0;i<5;i++)
		printf("\n%d",a[i]);
	sort(a);
}
void sort(int a[])
{
	int i,t=0,j;
	printf("\n sorted array is:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);

	}
}
