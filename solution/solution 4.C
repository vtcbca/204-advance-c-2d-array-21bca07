/*
Program : Check if String is in array or not
Date    : 8-Mar-2022
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int output=0,i;
	char s1[5][1000],s2[1][1000];
	clrscr();

	printf("\nEnter Strings : \n");

	for(i=0;i<5;i++)
		gets(s1[i]);
	for(i=0;i<5;i++)
		printf("No. %d : %s\n",i,s1[i]);


	printf("\nEnter A String to search in array : \n");
	gets(s2[0]);

	for(i=0;i<5;i++)
	{
		if((strcmp(s1[i],s2[0]))==0)
			printf("The String %s in Array No. %d Is Same",s2[0],i);
		else
			output+=1;

	}
	if(output==5)
		printf("Sorry Entered String Do not Match");

	getch();
}