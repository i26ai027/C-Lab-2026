#include <stdio.h>
int main()
{
	int num;
	int sum=0;
	printf("Enter the number");
	
	while(1)
	{
		scanf("%d",&num);
	
	if (num<0)
	{
		break;
	}
		sum=sum+num;
		
	}

	printf("Total sum %d:\n",sum);
}
