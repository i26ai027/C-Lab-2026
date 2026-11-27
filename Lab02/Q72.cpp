#include <stdio.h>
int main()
{
	char name[10];
	printf("Enter the string:");
	scanf("%s",&name);
	int len=0;
	while(name[len]!='\0')
	{
		len++;
	}
	printf("The length will be: %d",len);
	
}
