#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,s;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=1;s<=4;s--)
		{
			printf(" ");
		}
		for(a=i;a>=1;a--)
		{
			printf("%d",a);
		}
		printf("/n");
	}
	getch();
}
