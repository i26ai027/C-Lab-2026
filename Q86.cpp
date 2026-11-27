#include <stdio.h>
#include <string.h>
int main()
{
	char name[10];
	printf("Enter your name");
	scanf("%s",&name);
	int i=0;
	while(name[i]!='\0')
	{
		printf("%d \n",name[i]);
		i++;
	}
	printf("\n");
	return 0;
	
}
