#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,k=11;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(a=1;a<=i;a++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
	getch();
}
