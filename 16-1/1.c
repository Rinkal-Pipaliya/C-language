#include<stdio.h>

void cube(int n)
{
		printf("cube is: %d",n*n*n);
}
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);	
	
	cube(n);
}
