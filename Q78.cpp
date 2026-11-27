#include<stdio.h>
int main()
{
	char str[30],search;
	int i=0,found=0;
	printf("Enter the string");
	scanf("%s",str);
	printf("Enter the alphabet to search");
	scanf("%s",&search);
	while(str[i]!='\0')
	{
		if (str[i]==search)
		{
			found=1;
			break;
		}
		i++;
	}
	if(found==1){
		printf("It is present");
	}
	else
	{
		printf("It is not present");
	}
	return 0;
		
	

	
}
