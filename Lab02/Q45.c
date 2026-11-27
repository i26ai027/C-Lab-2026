#include <stdio.h>
int main()
{
	int num[5],i,countpos=0,countneg=0,count0=0;
	printf("Enter the array elements");
	for (i=0;i<=5;i++)
	{
		scanf("%d",& num[i]);
	}
	for (i=0;i<=5;i++)
	{
		if (num[i]>0)
		{
			printf("NUMBER is positive");
			countpos++;
			
		}
		else if (num[i]<0)
		{
			printf("NUMBER is negative");
			countneg++;
		}
		else
		{
			printf("Zero");
		}
		
		printf("\n");
	

	}
		printf(" positive %d \n",countpos);
		printf(" negative %d \n",countneg);
	
}
