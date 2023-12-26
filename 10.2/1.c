#include<stdio.h>

int input()
{
	int size;
	printf("%d",&size);
	return size;
}
void Arrayinput(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int Arraysum(int a[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=a[i];
	}
	return sum;
}

int main()
{
	int size,a;
	printf("Enter array size:");
	size=input();
	
	inta[size];
	printf("\nEnter array element:\n");
	Arrayinput(a,size);
	int sum=Arraysum(a,size);
	printf("The sum of an array :%d",sum);
}
