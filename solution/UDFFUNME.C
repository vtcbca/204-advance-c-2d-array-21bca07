/*write a menudriven program to perform following task using different function category.
(1)Primenumber
(2)Pellindromenumber
(3)reverse number
(4)print even num till n
(5)exit
date:21-03-22*/
#include<stdio.h>
#include<conio.h>
void prime();
void pellindrome();
//void reverse();
//void even();
int menu();
void main()
{
	int a,b,x;
	char y;
	clrscr();
       //	do
      //	{
	x=menu();
	switch(x)
	{
		case 1:
			prime();
			break;
		case 2:
			pellindrome();
			break;
	      /*	case 3:
			reverse();
			break;
		case 4:
			even();
			break; */
		case 5:exit(0);

		default:
			printf("\n Invalid choice");
	}
       /*	printf("\n\n\t Do you want to continue?(yes=y/Y,no=n/N):");
	flushall();
	scanf("%c",&y);
	}while(y=='y'||'Y');*/
   getch();
}
     int menu()
     {
	int choice;
	printf("\n MENU");
	printf("\n _________________________");
	printf("\n1.Prime number\n2.Pellindrome number\n3.Reverse number\n4.Print even number till n");
	printf("\n___________________________");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	return choice;
     }
     void prime()
     {
	int no,i=2,c=0;
	printf("\nEnter any number:");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
		i=i+1;
	}
	if(c==1)
		printf("\n %d is not a prime number",no);
	else
		printf("\n %d is a prime number",no);
     }
     void pellindrome()
     {
	int a,b=0,c,n;
	printf("\nEnter any number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		a=n%10;
		b=(b*10)+a;
		n=n/10;
	}
	if(b==c)
		printf("\n %d is a pellindrome number",c);
	else
		printf("\n %d is not a pellindrome number",c);
     }




