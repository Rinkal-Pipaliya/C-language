#include<stdio.h>
main()
{
	char a[20] = "admin@gmail.com";
	char b[20] = "123456";
	
	char a1[20];
	char b1[20];
	printf("enter your email :");
	scanf("%s",&a1);
	printf("enter your password:");
	scanf("%s",&b1);
	
	int i;
	
	if(a[i] == a1[i] && b[i] == b1[i])
	{
		printf("login successfull....\n");
	}
	else
	{
		printf("\n login failed..invalid Credential.");
	}
}
