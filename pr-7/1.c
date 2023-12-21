#include<stdio.h>

void sum(int n1,int n2)
{
	printf("sum:%d",n1+n2);
}
void sub(int n1,int n2)
{
	printf("sub:%d",n1-n2);
}
void mul(int n1,int n2)
{
	printf("mul:%d",n1*n2);
}
void div(int n1,int n2)
{
	printf("div:%d",n1/n2);
}
void mod(int n1,int n2)
{
	printf("modular:%d",n1%n2);
}

void main()
{
	int n1,n2,choice;
	printf("Enter The First Number:");
	scanf("%d",&n1);
	printf("Enter The Second Number:");
	scanf("%d",&n2);

	do
	{
		printf("\n press 1)for sum\n");
		printf("\n press 2)for sub\n");	
		printf("\n press 3)for mul\n");
		printf("\n press 4)for div\n");
		printf("\n press 5)for modular\n");	
		printf("\n press 6)for EXIT\n");	
		printf("Enter The Choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				sum(n1,n2);
				break;
			case 2:
				sub(n1,n2);
				break;
			case 3:
				mul(n1,n2);
				break;
			case 4:
				div(n1,n2);
				break;
			case 5:
				mod(n1,n2);
				break;
			case 6:
				break;
		}
	}while(choice!=6);
}
	

