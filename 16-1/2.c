#include<stdio.h>

void div(int n)
{
		if(n%3==0 && n%5==0)
		{
			printf("The Given Number is Divisible by both 3 & 5.");
		}
		else
		{
			printf("The Given Number is Not Divisible by both 3 & 5.");
		}
}
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);	
	
	div(n);
}
