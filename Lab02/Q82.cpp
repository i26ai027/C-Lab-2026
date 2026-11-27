#include <stdio.h>
#include <string.h>
int main()
{
	int i=0;
	char str1[20];
	printf("Enter the string");
	gets(str1);
	int count=0;
	while(str1[count]!='\0')
	{
		count++;
	}
	printf("The total characters will be %d",count);
}
