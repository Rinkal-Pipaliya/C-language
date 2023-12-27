#include<stdio.h>

int main()
{
	char str[20];
	char *ptr = str;
	int length =0;
	
	printf("Enter Any string:");
	scanf("%[^\n]",str);
	
	while(*ptr !='\0')
	{
		length++;
		ptr++;
	}
	
	printf("The length of the stringis:%d\n",length);
}
