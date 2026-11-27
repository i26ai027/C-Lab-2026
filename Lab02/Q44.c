#include <stdio.h>
int main()
{
	int num[10],i,j,odd=0,even=0;
	printf("enter the elements");
	for (i=0;i<10;i++)
	{
		scanf("%d",& num[i]);
	}
	for (i=0;i<10;i++)
	{
		if (num[i]%2==0)
		{
			printf("Number is even");
		}
		else
		{
			printf("Number is odd");
		}
		printf("\n");
	}
}
