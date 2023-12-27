#include<stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	
}
void main()
{
	int x,y;
	printf("Enter The value of x:");
	scanf("%d",&x);
	printf("Enter The value of y:");
	scanf("%d",&y);
	
	printf("Before Swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n",y);
	
	swap(&x,&y);
	
	printf("Aftee Swapping:\n");
	printf("x: %d\n",x);
	printf("y: %d\n",y);
}
