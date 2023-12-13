#include<stdio.h>

main()
{
	char str1[20],str2[20];
	int i,len=0,j=0,k=0;
	
	printf("Enter the string1 :");
	scanf("%s",str1);

	
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}

	for(i=len-1;i>=0;i--)
	{
		str2[j]=str1[i];
		j++;
	}
	
	for(i=0;i<len;i++)
	{
		if(str1[i] != str2[i])
		{
			k=1;
		}
	}
	if(k==0)
	{
		printf("Palindrome:");
	}
	else
	{
		printf("Not Palindrome:");
	}
	
}
