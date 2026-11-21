#include <stdio.h>
int main()
{
	char ch;
	printf("Enter the value:");
	scanf("%c",& ch);
	if(ch>='A' && ch<='Z')
	{
		printf("Capital Letters");
		
	}
	else if(ch<='a' && ch<='z')
	{
		printf("Small Case");
	}
	else if(ch>=1 && ch<=9)
	{
		printf("Digits");
	}
	else
	{
		printf("Special Symbols");
	}
}
