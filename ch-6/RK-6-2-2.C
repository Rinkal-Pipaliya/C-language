#include<stdio.h>
#include<conio.h>
main()
{
	 int a,b,c,d;
	 clrscr();

	 printf("enter a");
	 scanf("%d",&a);
	 printf("enter b");
	 scanf("%d",&b);
	 printf("enter c");
	 scanf("%d",&c);
	 printf("enter d");
	 scanf("%d",&d);

	 if(a>b)
	 {
		if(a>c)
		{
			printf("a is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	 }
	 if(b>c)
	 {
		printf("b is maxinimum");
	 }
	 else
	 {
		if(c>d)
		{
			printf("c is maximum");
		}
		else
		{
			printf("d is maximum");
		}
	 }
	 getch();
}