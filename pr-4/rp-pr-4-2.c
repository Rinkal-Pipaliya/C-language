#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,s;
	clrscr();

	for(i=5;i<=1;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			printf(" ");
		}
		for(a=1;a<=i;a++)
		{
			printf("%d",a%2);
		}
		printf("\n");
	}
	getch();
}
