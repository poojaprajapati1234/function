#include<stdio.h>
#include<conio.h>
main()
{
	vote(12);
	
}
void vote(int n)
{
	if(n>18)
	{
		printf("you are eligible for vote :");
	}
	else
	{
		printf("you are not eligible for vote :");
	}
	
}
