#include<stdio.h>
#include<conio.h>
main()
{        int a;
	 clrscr();
	 printf("enter any number :");
	 scanf("%d",&a);

	 if(a==0)
	 {
		printf("this number is neutral");
	 }
	 else if(a<0)
	 {
		printf("this number is negetive");
	 }
	 else
	 {
		printf("this number is positive");
	 }
	 getch();


	 getch();
}