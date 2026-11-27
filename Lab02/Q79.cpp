#include <stdio.h>
#include<string.h>
int main()
{
	char name[10];
	int count=0;
	printf("Enter the string");
	scanf("%s",&name);
	int len;
	len=strlen(name);
	for(int i=0;i<len;i++)
	{
		switch(name[i])
		{
			case 'A':
			case 'E':
			case 'O':
            case 'I':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':		
            count++;
            break;
		}
			
	}
	printf("Total number of vowels is %d",count);
}
