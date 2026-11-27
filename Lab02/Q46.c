#include <stdio.h>
int main()
{
	int num[10],i,max,max2;
	printf("Enter the array elements");
	for(i=0;i<=10;i++)
	{
		scanf("%d",& num[i]);
	}
	for(i=0;i<=10;i++)
	{
		if (num[0]>num[1])
		{
			max=num[0];
			max2=num[1];
		}
		else
		{
			max=num[1];
		    max2=num[0];
		}
		printf("max number is: %d",max);
		printf("max second number is: %d",max2);
	}
	printf("\n");
	
}
