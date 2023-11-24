#include<stdio.h>
#include<conio.h>
main()
{
	int n,digit=0;
	clrscr();
	printf("enter any numbaer:");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		digit++;
	}
	printf("total number digit:%d",digit);
	getch();

}