#include<stdio.h>
#include<conio.h>

main()
{
	int n,ln,sum;
	clrscr();
	printf("enter any number :");
	scanf("%d",&n);

	ln=n%10;
	while(n>9)
	{
		n=n/10;
	}
	sum=n+ln;
	printf("sum of first and last number:%d",sum);
	getch();
}