#include<stdio.h>

int main()
{
	int n;
	printf("Enter The Array's size:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter array Element :\n");
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
		
	}
	printf("reversed array element:");
	
	for(i=n;i>=0;i++)
	{
		printf("%d",a[i]);
	}
}
