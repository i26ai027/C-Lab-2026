#include <stdio.h>
int main()
{
	int num,i;
	int fact=1;
	int sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		fact=fact*i;
		sum=sum+(i/fact);
	}
	printf("Sum of the series;%d \n",num,sum);
}
